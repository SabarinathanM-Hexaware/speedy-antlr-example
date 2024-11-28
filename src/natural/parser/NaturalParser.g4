parser grammar NaturalParser;

options {
    tokenVocab = NaturalLexer;
}

// Parser rules
program: (lineNumberStatement | statement | WS | NL)+;

lineNumberStatement
    : LINE_NUMBER WS? statement
    ;

statement

    : label? (dataDefinition
    | subroutine
    | functionDefinition
    | noRecordsFoundStatement
    | decisionStatement
    | valueAssignment
    | forStatement
    | ifStatement
    | performStatement
    | callnatStatement
    | examineStatement
    | moveStatement
    | findStatement
    | readStatement
    | storeStatement
    | updateStatement
    | deleteStatement
    | getStatements
    | histogramStatement
    | endTransaction
    | backoutTransaction
    | readworkfileStatement
    | writeworkfileStatement
    | closeworkfileStatement
    | inputStatement
    | reinputStatement
    | calculations
    | assignStatement
    | setkeyStatement
    | redefineStatement
    | resetStatement
    | sortStatement
    | compressStatement
    | doStatement
    | repeatStatement
    | atStartOfDataStatement
    | formatStatement
    | assignmentStatement
    | includeStatement
    | fetchStatement
    | callStatement
    | otherStatement)
    ;

label
    : LABEL
    ;


dataDefinition
    : DEFINE_DATA statement+ END_DEFINE
    ;


compressStatement
    : COMPRESS (NUMERIC | FULL | WS)* (operand | WS | NL)+ INTO (WS | NL | LINE_NUMBER)* operand ((WS | NL | LINE_NUMBER)* compressEnd)?
    ;

compressEnd
    : LEAVING_SPACE
    | LEAVING_NO_SPACE
    | WITH (WS? ALL)? DELIMITER WS? STRING
    ;


inputStatement
    : INPUT WS inputUsingMap
    | INPUT (STRING | variable | inputOptions | '/' | WS | LINE_NUMBER | NL)+ NL
    ;

inputOptions
    : MARK
    | POSITION
    | IN
    | FIELD
    ;

inputUsingMap
    : statement* USING? WS?  MAP  WS?  STRING ;

variable
    : IDENTIFIER (WS? (IDENTIFIER| LINE_REF))?
    | IDENTIFIER DOT IDENTIFIER
    ;

reinputStatement
    : REINPUT (WS FULL)? ((LINE_NUMBER WS)? reinputOptions | WS | NL)* (WS ALARM)?
    ;

reinputOptions
    : MARK
    | IDENTIFIER
    | WITH_TEXT
    | MARK WS POSITION WS LINE_NUMBER WS IN WS IDENTIFIER
    | USING_HELP
    | STRING
    ;

sortStatement
    : SORT statement* END_SORT
    ;

examineStatement
    : EXAMINE WS (variable | STRING | examineOptions | LINE_NUMBER | WS | NL)+ NL
    ;

examineOptions
    : USING
    | FOR
    | AND_TEXT
    | FULL
    | SUBSTRING
    | REPLACE
    | DELETE
    | GIVING
    | WITH
    | ABSOLUTE
    | POSITION
    | CHARPOSITION
    | CHARLENGTH
    | LENGTH
    | IN
    | NUMBER
    | TRANSLATE
    | DELIMITER
    | UPPPER_CASE
    | LOWER_CASE
    | INTO
    | INVERTED
    | INDEX
    | PATTERN
    | VALUE_OF
    ;

moveStatement
    : MOVE WS? (moveOptions | WS | NL)+ TO? (moveOptions | WS | NL)+
    ;

moveOptions
    : operand
    | LT operand GT
    | ROUNDED
    | SUBSTRING
    | BY_NAME
    | BY_POSITION
    | EDITED
    | LEFT
    | RIGHT
    | JUSTIFIED
    | NORMALIZED
    | ENCODED
    | ALL
    | INDEXED
    ;

repeatStatement
    : REPEAT statement* LOOP
    ;

doStatement
    : DO statement* DOEND
    ;

storeStatement
    : STORE WS? IDENTIFIER WS? WITH? WS? NL? storeCondition*
    | STORE WS? RECORD WS? IN? WS? IDENTIFIER WS? WITH? WS? NL? storeCondition*
    ;

storeCondition
    : (LINE_NUMBER WS)? otherStatement WS? COLON? EQ WS? (IDENTIFIER | STRING) WS* NL
//    | (LINE_NUMBER WS)? END_TRANSACTION WS* NL*
    ;

findStatement
    : FIND WS? findOptions WS? findBody=blockContent endBlock=(LOOP | END_FIND)
    | FIND WS NUMBER WS findNumber operand WS? NL
    ;

findOptions
    : FIRST
    | UNIQUE_LEX
    | ALL
    | IDENTIFIER
    | LINE_REF
    | variable
    ;

findNumber
    : (operand | WS | LINE_NUMBER | NL                                                          // variables & values
    | WHERE | WITH | STARTING_WITH | COUPLED | SORTED | BY | RETAIN_AS | MULTI_FETCH            // clauses
    | VIA | THRU | DESCENDING | AND | TO | FROM | OF | ON | OFF | BY_NAME | BY_POSITION         // keywords
    | BUT | compOp | logicalOp                                                                  // operators
    )*
    ;

readStatement
    : READ WS? (IDENTIFIER | LINE_REF) WS?  readBody=blockContent endBlock=(LOOP | END_READ)
    ;

updateStatement
    : updateStartline ( WS | NL)+ (SET | WITH)? (WS | NL | LINE_NUMBER | operand WS? COLON? EQ WS? operand | calculations)+ WS? NL
    | updateStartline WS USING WS SAME WS RECORD WS? NL
    | updateStartline WS? NL
    ;

updateStartline
    : UPDATE WS? RECORD? WS? IN? WS? STATEMENT? WS? (LINE_REF | IDENTIFIER)?
    ;

deleteStatement
    : DELETE WS? LINE_REF?
    ;

getStatements
    : getTabledStatements
    | getTransactionStatement
    | getSameStatement
    ;

getTabledStatements
    : GET WS tableName=IDENTIFIER (getTabledOptions | WS)* filterCondition=variable WS? NL
    ;

getTabledOptions
    : RECORD
    | RECORDS
    ;

getTransactionStatement
    : GET_TRANSACTION_DATA (WS | NL | LINE_NUMBER | IDENTIFIER)+ NL
    ;

getSameStatement
    : GET_SAME (WS? LINE_REF)? (WS | IDENTIFIER)* NL
    ;

histogramStatement
    : HISTOGRAM query=histogramOptions statement* endBlock=(END_HISTOGRAM | LOOP)
    ;

histogramOptions
    : (operand | LINE_REF | WS | LINE_NUMBER | NL
    | ALL | FROM | WITH | THRU | IN | VALUE | FOR | FIELD | ON | OFF | OF
    | ASCENDING | DESCENDING | VARIABLE | DYNAMIC | SEQUENCE
    | STARTING_WITH | STARTING_FROM | ENDING_AT | MULTI_FETCH | WHERE
    | compOp | logicalOp)* operand
    ;

endTransaction
    : END_TRANSACTION
    ;

backoutTransaction
    : BACKOUT_TRANSACTION
    ;

readworkfileStatement
    // do not combine below statements by doing combined end like (END_ALL | END_WORK | LOOP). It won't work as tested.
    : (READ_WORK_FILE | READ_WORK) WS workfilenumberOption (WS? ONCE)? readworkfileOptions atEndOfFileStatement
    | (READ_WORK_FILE | READ_WORK) WS workfilenumberOption (WS? ONCE)? readworkfileOptions statement+ END_ALL
    | (READ_WORK_FILE | READ_WORK) WS workfilenumberOption (WS? ONCE)? readworkfileOptions statement+ (END_WORK | LOOP)
    ;

workfilenumberOption
    : LINE_NUMBER
    ;

readworkfileOptions
    : (operand | LINE_REF | WS | LINE_NUMBER | NL
    | RECORD | FILLER | OFFSET | AND | SELECT | GIVING | LENGTH
    )*
    ;

atEndOfFileStatement
    : AT_END_OF_FILE statement* END_ENDFILE
    ;

writeworkfileStatement
    : (WRITE_WORK_FILE | WRITE_WORK) WS workfilenumberOption (WS? VARIABLE)? (operand | LINE_NUMBER | WS | NL)* NL
    ;

closeworkfileStatement
    : (CLOSE_WORK_FILE | CLOSE_WORK) WS workfilenumberOption
    ;

noRecordsFoundStatement
    : IF WS (NO_RECORDS_FOUND | NO_RECORD_FOUND) statement* END_NOREC
    ;

atStartOfDataStatement
    : AT_START_OF_DATA WS? IDENTIFIER? NL? (DO WS)? statement* (END_START | DOEND)
    ;

formatStatement
    //: FORMAT (WS*? assignmentStatement WS? NL? LINE_NUMBER?)*
    : formatOptions (WS*? assignmentStatement WS? NL? LINE_NUMBER?)*
    ;

formatOptions
    : FORMAT WS? LINE_REF
    | FORMAT
    ;

assignmentStatement
    : IDENTIFIER compOp (LINE_NUMBER | IDENTIFIER | ON | OFF)
    ;

includeStatement
    : INCLUDE (WS*? IDENTIFIER WS? NL? LINE_NUMBER?)
    ;

redefineStatement
//    : REDEFINE WS? redefineBody endStatement
    : REDEFINE WS? redefineBody
    ;

redefineBody
    : ((LINE_NUMBER | IDENTIFIER) | WS | NL)* NL
    ;

resetStatement
    : RESET WS? redefineBody
    ;

callnatStatement
    //: CALLNAT WS? subprogramName=STRING (WS? parameterList)?
    : CALLNAT WS? subprogramName=STRING WS? (variable | WS | NL | LINE_NUMBER)* NL
    ;

setkeyStatement
    : SET_KEY WS*
    ;

performStatement
    : PERFORM WS? subroutineName=subroutineNames (WS? USING WS? variable)?
    ;

subroutineNames
    : IDENTIFIER
    | TRANSLATE
    ;

fetchStatement
    : FETCH (WS (REPEAT | RETURN))? WS? subprogramName=STRING ((WS | NL | LINE_NUMBER)* (STRING | IDENTIFIER))*
    ;

callStatement
    : CALL (WS INTERFACE4)? WS? subprogramName=STRING (WS? USING)? ((WS | NL | LINE_NUMBER)* (IDENTIFIER | STRING))* NL
    ;

forStatement
    : FOR WS condition TO WS operand statement* (LOOP | END_FOR)
    ;

acceptRejectIfStatement
    : (ACCEPT_IF | REJECT_IF) WS? condition
    ;

decisionStatement
    : (DECIDE_FOR | DECIDE_ON) WS? (FIRST | EVERY) (WS CONDITION? WS? NL? LINE_NUMBER?)? (VALUE_OF | VALUE)? WS? WHEN? WS IDENTIFIER statement* END_DECIDE
    ;

ifStatement
    : ifStructuredStatement
    | ifElseStatement
    | ifMultilinedStatement
    | ifSinglelinedStatement
    | acceptRejectIfStatement
    ;

ifStructuredStatement
    : IF WS condition (WS | NL | LINE_NUMBER)* THEN? statement+ (END_IF | elseStructured) // structured mode
    ;

elseStructured
    : ELSE statement* END_IF
    ;

ifElseStatement
    : IF WS condition (WS | NL LINE_NUMBER? WS) THEN? (WS | NL LINE_NUMBER? WS)? doStatement (WS | NL LINE_NUMBER? WS) (elseMultilinedStatement | elseSinglelinedStatement)
    ;

ifMultilinedStatement
    : IF WS condition (WS | NL | LINE_NUMBER)* THEN (WS | NL | LINE_NUMBER)* doStatement ((WS | LINE_NUMBER? WS) (elseMultilinedStatement | elseSinglelinedStatement))?   // Reporting mode
    ;

ifSinglelinedStatement
    : IF WS condition (WS | NL | LINE_NUMBER)* THEN? (WS | NL | LINE_NUMBER)* onelinerBody ((WS | LINE_NUMBER | NL)* (elseMultilinedStatement | elseSinglelinedStatement))?
    ;

elseMultilinedStatement
    : ELSE (WS | NL LINE_NUMBER? WS) doStatement // Reporting mode
    ;

elseSinglelinedStatement
    : ELSE (WS | NL LINE_NUMBER? WS) onelinerBody  // Reporting mode
    ;

onelinerBody
    : (LINE_NUMBER? WS)? statement (NL | EOF)
    | (LINE_NUMBER? WS)? statement
    ;

condition
    : operand (WS | NL LINE_NUMBER? WS) (logicalOp | compOp | arithmaticOp) (WS | NL LINE_NUMBER? WS) operand ((WS | NL LINE_NUMBER? WS)? optionalCondition)?
    | operand (WS | NL LINE_NUMBER? WS)? optionalCondition?
    | NOT_TEXT WS operand (WS | NL LINE_NUMBER? WS)? optionalCondition?
    ;

optionalCondition
    : (logicalOp | compOp | arithmaticOp) (WS | NL LINE_NUMBER? WS) operand (WS | NL LINE_NUMBER? WS)? optionalCondition?
    ;

operand
    : variable
    | STRING
    | LINE_NUMBER
    | FLOAT
    | naturalKeywords
    | '(' operand ')'
    | DATE_CONSTANT
    | INPUT_PARAM
    | H_CONSTANT
    ;

naturalKeywords
    : POSITION (WS LINE_REF)?
    ;

logicalOp
    : AND_TEXT
    | OR_TEXT
    | AND
    | OR
    | AND_EQ
    | OR_RQ
    | OR_SRQ
    | NOT_TEXT
    | EQUAL
    | NOTEQUAL
    | EQUAL_TO
    | LESS_THAN
    | GREATER_THAN
    | LESS_EQUAL
    | GREATER_EQUAL
    ;



subroutine
    : DEFINE_SUBROUTINE WS? subroutineName=subroutineNames WS? subroutineBody=blockContentSubroutine (END_SUBROUTINE | RETURN)
    ;


blockContentSubroutine
    : (subroutineStatement | WS | NL)* TRAILING_COMMENT?
    ;

subroutineStatement
    : (dataDefinition
    | subroutine
    | functionDefinition
    | valueAssignment
    | forStatement
    | ifStatement
    | performStatement
    | callnatStatement
    | redefineStatement
    | resetStatement
    | examineStatement
    | moveStatement
    | findStatement
    | readStatement
    | storeStatement
    | updateStatement
    | deleteStatement
    | getStatements
    | histogramStatement
    | endTransaction
    | backoutTransaction
    | readworkfileStatement
    | writeworkfileStatement
    | closeworkfileStatement
    | inputStatement
    | reinputStatement
    | calculations
    | assignStatement
    | sortStatement
    | compressStatement
    | doStatement
    | repeatStatement
    | atStartOfDataStatement
    | formatStatement
    | assignmentStatement
    | includeStatement
    | fetchStatement
    | callStatement
    | otherStatement )
    ;

functionDefinition
    : DEFINE_FUNCTION WS? functionName=IDENTIFIER WS? RETURNS WS? returnType=IDENTIFIER WS? functionBody=blockContent WS? END_FUNCTION
    ;

blockContent
    : (statement | WS | NL)* TRAILING_COMMENT?
    ;

valueAssignment
    : VALUE WS? STRING? WS? (WS? COMMA WS? STRING)* ESCAPE_BOTTOM? NL? LINE_NUMBER? WS? NONE? WS? NL? WS? IDENTIFIER? WS? COLON?EQ? WS? STRING? valueAssignment?
    ;

assignStatement
    : ASSIGN WS? ROUNDED? WS? variable WS? COLON? EQ (operand | WS)+
    ;

addOperation
    : ADD addContent* NL?
    ;

multiplyOperation
    : MULTIPLY addContent* NL?
    ;

subtractOperation
    : SUBTRACT addContent* NL?
    ;

divideOperation
    : DIVIDE addContent* NL?
    ;

computeOperation
    : COMPUTE WS? ROUNDED? WS? variable WS? COLON? EQ WS? operand WS? arithmaticOp WS? operand WS? optionalCompute?
    | COMPUTE WS? ROUNDED? WS? variable WS? COLON? EQ WS? operand
    ;

arithmaticOperation
    : IDENTIFIER WS? COLON? EQ WS? operand WS? arithmaticOp WS? operand WS? optionalCompute?
    ;

optionalCompute
    : arithmaticOp WS? operand WS? optionalCompute?
    ;

calculations
    : addOperation
    | subtractOperation
    | multiplyOperation
    | divideOperation
    | computeOperation
    | arithmaticOperation
    ;

addContent
    : IDENTIFIER
    | LITERAL
    | FLOAT
    | LINE_NUMBER
    | TO
    | GIVING
    | ROUNDED
    | WS
    | STRING
    ;

compOp
    : GT_TEXT
    | LT_TEXT
    | GE_TEXT
    | LE_TEXT
    | EQ_TEXT
    | NE_TEXT
    | GT
    | LT
    | GE
    | LE
    | EQ
    | NE
    ;

arithmaticOp
    : PLUS
    | MINUS
    | MULT
    | DIV
    ;


endStatement
    : READ
    | FIND
    | HISTOGRAM
    | GET
    | GET_SAME
    | PASSW
    | LIMIT
    | STORE
    | UPDATE
    | DELETE
    | END_TRANSACTION
    | BACKOUT_TRANSACTION
    | GET_TRANSACTION_DATA
    | RETRY
    | AT_START_OF_DATA
    | AT_END_OF_DATA
    | AT_BREAK
    | BEFORE_BREAK_PROCESSING
    | PERFORM_BREAK_PROCESSING
    | CALLDBPROC
    | COMMIT
    | DELETE
    | INSERT
    | PROCESS_SQL
    | READ_RESULT_SET
    | ROLLBACK
    | SELECT
    | UPDATE
    | COMPUTE
    | ADD
    | SUBTRACT
    | MULTIPLY
    | DIVIDE
    | MOVE
    | COMPRESS
    | SEPARATE
    | EXAMINE
    | RESET
    | ESCAPE
    | FOR
    | REPEAT
    | SORT
    | FORMAT
    | DISPLAY
    | WRITE
    | WRITE_TITLE
    | WRITE_TRAILER
    | AT_TOP_OF_PAGE
    | AT_END_OF_PAGE
    | EJECT
    | NEWPAGE
    | SUSPEND_IDENTICAL_SUPPRESS
    | DEFINE_PRINTER
    | CLOSE_PRINTER
    | INPUT
    | REINPUT
    | DEFINE_WINDOW
    | SET_WINDOW
    | PROCESS_PAGE
    | PROCESS_PAGE_USING
    | PROCESS_PAGE_UPDATE
    | PROCESS_PAGE_MODAL
    | IF
    | IF_SELECTION
    | DECIDE_FOR
    | DECIDE_ON
    | CALL
    | CALLNAT
    | CALL_FILE
    | CALL_LOOP
    | DEFINE_SUBROUTINE
    | FETCH
    | PERFORM
    | PROCESS_COMMAND
    | RUN
    | DEFINE_FUNCTION
    | DEFINE_PROTOTYPE
    | FUNCTION_CALL
    | STOP
    | TERMINATE
    | WRITE_WORK_FILE
    | DOWNLOAD_PC_FILE
    | READ_WORK_FILE
    | UPLOAD_PC_FILE
    | CLOSE_WORK_FILE
    | CLOSE_PC_FILE
    | DEFINE_WORK_FILE
    | DEFINE_CLASS
    | CREATE_OBJECT
    | SEND_METHOD
    | INTERFACE
    | METHOD
    | PROPERTY
    | EXPAND
    | REDUCE
    | RESIZE
    | OPEN_CONVERSATION
    | CLOSE_CONVERSATION
    | DEFINE_DATA_CONTEXT
    | PARSE
    | REQUEST_DOCUMENT
    | DEFINE_DATA
    | END
    | INCLUDE
    | ON_ERROR
    | RELEASE
    | SET_CONTROL
    | SET_KEY
    | SET_GLOBALS
    | SET_TIME
    | STACK
    | LOOP
    | DO
    | DOEND
    | OBTAIN
    | REDEFINE
    | END_START
    ;

otherStatement
    : (~(IF
    | ELSE
    | DECIDE_FOR
    | DECIDE_ON
    | DEFINE_SUBROUTINE
    | DEFINE_FUNCTION
    | RETURN
    | VALUE
    | CALLNAT
    | PERFORM
    | FIND
    | STORE
    | INPUT
    | REINPUT
    | DOEND
    | END_IF
    | END_FOR
    | LOOP
    | DO
    | THEN
    | RESET
    | REDEFINE
    | GET
    | UPDATE
    | READ
    | MOVE
    | AT_START_OF_DATA
    | FORMAT
    | INCLUDE
    | HISTOGRAM | END_HISTOGRAM
    ))+?
    ;
