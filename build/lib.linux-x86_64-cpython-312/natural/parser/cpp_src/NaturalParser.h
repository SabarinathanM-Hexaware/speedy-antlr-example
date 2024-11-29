
// Generated from NaturalParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  NaturalParser : public antlr4::Parser {
public:
  enum {
    DEFINE = 1, FUNCTION = 2, RETURNS = 3, DATA = 4, LOCAL = 5, GLOBAL = 6, 
    PARAMETER = 7, REDEFINE = 8, PERFORM = 9, CALLNAT = 10, ESCAPE = 11, 
    ESCAPE_BOTTOM = 12, RETURN = 13, IF = 14, THEN = 15, ELSE = 16, ELSE_IF = 17, 
    END_IF = 18, DECIDE = 19, END_DECIDE = 20, WHEN = 21, FOR = 22, THRU = 23, 
    EVERY = 24, FIRST = 25, CONDITION = 26, ANY = 27, NONE = 28, ALL = 29, 
    UNIQUE_LEX = 30, REPEAT = 31, LOOP = 32, END_FOR = 33, END = 34, READ = 35, 
    FIND = 36, SELECT = 37, UPDATE = 38, STORE = 39, DELETE = 40, GET = 41, 
    OBTAIN = 42, ADD = 43, SUBTRACT = 44, MULTIPLY = 45, DIVIDE = 46, MOVE = 47, 
    VALUE_OF = 48, TO = 49, DO = 50, DEFINE_SUBROUTINE = 51, END_SUBROUTINE = 52, 
    DEFINE_SUBPROGRAM = 53, END_SUBPROGRAM = 54, DEFINE_FUNCTION = 55, END_FUNCTION = 56, 
    END_READ = 57, END_FIND = 58, END_SELECT = 59, END_TRANSACTION = 60, 
    BACKOUT_TRANSACTION = 61, END_ALL = 62, VALUE = 63, DOEND = 64, USING_HELP = 65, 
    USING = 66, COMPUTE = 67, INPUT = 68, MAP = 69, RESET = 70, SET_KEY = 71, 
    COMPRESS = 72, NO_RECORDS_FOUND = 73, NO_RECORD_FOUND = 74, END_NOREC = 75, 
    REINPUT = 76, MARK = 77, WITH_TEXT = 78, FULL = 79, POSITION = 80, IN = 81, 
    ALARM = 82, RECORD = 83, RECORDS = 84, STATEMENT = 85, SET = 86, SAME = 87, 
    GET_TRANSACTION_DATA = 88, GET_SAME = 89, WITH = 90, ACCEPT_IF = 91, 
    REJECT_IF = 92, EXAMINE = 93, SUBSTRING = 94, REPLACE = 95, GIVING = 96, 
    ABSOLUTE = 97, CHARPOSITION = 98, CHARLENGTH = 99, LENGTH = 100, NUMBER = 101, 
    TRANSLATE = 102, DELIMITER = 103, UPPPER_CASE = 104, LOWER_CASE = 105, 
    INTO = 106, INVERTED = 107, INDEX = 108, INDEXED = 109, PATTERN = 110, 
    DISPLAY = 111, WRITE = 112, WRITE_TITLE = 113, WRITE_TRAILER = 114, 
    FIELD = 115, BY_NAME = 116, BY_POSITION = 117, EDITED = 118, LEFT = 119, 
    RIGHT = 120, JUSTIFIED = 121, NORMALIZED = 122, ENCODED = 123, ROUNDED = 124, 
    SEPARATE = 125, SORT = 126, END_SORT = 127, FORMAT = 128, SKIP_LEX = 129, 
    EJECT = 130, NEWPAGE = 131, SUSPEND_IDENTICAL_SUPPRESS = 132, DEFINE_PRINTER = 133, 
    CLOSE_PRINTER = 134, DEFINE_WINDOW = 135, SET_WINDOW = 136, PROCESS_PAGE = 137, 
    PROCESS_PAGE_USING = 138, PROCESS_PAGE_UPDATE = 139, PROCESS_PAGE_MODAL = 140, 
    IF_SELECTION = 141, DECIDE_FOR = 142, DECIDE_ON = 143, CALL = 144, CALL_FILE = 145, 
    CALL_LOOP = 146, FETCH = 147, PROCESS_COMMAND = 148, RUN = 149, DEFINE_PROTOTYPE = 150, 
    FUNCTION_CALL = 151, STOP = 152, TERMINATE = 153, WRITE_WORK_FILE = 154, 
    WRITE_WORK = 155, DOWNLOAD_PC_FILE = 156, READ_WORK_FILE = 157, READ_WORK = 158, 
    UPLOAD_PC_FILE = 159, CLOSE_WORK_FILE = 160, CLOSE_WORK = 161, CLOSE_PC_FILE = 162, 
    DEFINE_WORK_FILE = 163, DEFINE_CLASS = 164, CREATE_OBJECT = 165, SEND_METHOD = 166, 
    INTERFACE = 167, METHOD = 168, PROPERTY = 169, EXPAND = 170, REDUCE = 171, 
    RESIZE = 172, OPEN_CONVERSATION = 173, CLOSE_CONVERSATION = 174, DEFINE_DATA_CONTEXT = 175, 
    PARSE = 176, REQUEST_DOCUMENT = 177, RETRY = 178, AT_START_OF_DATA = 179, 
    AT_END_OF_DATA = 180, AT_BREAK = 181, BEFORE_BREAK_PROCESSING = 182, 
    PERFORM_BREAK_PROCESSING = 183, CALLDBPROC = 184, COMMIT = 185, PROCESS_SQL = 186, 
    READ_RESULT_SET = 187, ROLLBACK = 188, WRITE_PRINT = 189, AT_TOP_OF_PAGE = 190, 
    AT_END_OF_PAGE = 191, DEFINE_DATA = 192, END_DEFINE = 193, INCLUDE = 194, 
    ON_ERROR = 195, RELEASE = 196, SET_CONTROL = 197, SET_GLOBALS = 198, 
    SET_TIME = 199, STACK = 200, ACCEPT = 201, REJECT = 202, PASSW = 203, 
    LIMIT = 204, INSERT = 205, HISTOGRAM = 206, END_HISTOGRAM = 207, THEN_DO = 208, 
    IGNORE = 209, FRAC = 210, FROM = 211, VIEW = 212, ASSIGN = 213, NUMERIC = 214, 
    LEAVING_SPACE = 215, LEAVING_NO_SPACE = 216, END_START = 217, ON = 218, 
    OFF = 219, BY = 220, INTERFACE4 = 221, RETAIN_AS = 222, WHERE = 223, 
    STARTING_WITH = 224, COUPLED = 225, VIA = 226, BUT = 227, SORTED = 228, 
    ASCENDING = 229, DESCENDING = 230, OF = 231, MULTI_FETCH = 232, STARTING_FROM = 233, 
    ENDING_AT = 234, VARIABLE = 235, DYNAMIC = 236, SEQUENCE = 237, END_WORK = 238, 
    OFFSET = 239, FILLER = 240, ONCE = 241, AT_END_OF_FILE = 242, END_ENDFILE = 243, 
    PASSWORD = 244, CIPHER = 245, FILE = 246, REPOSITION = 247, PHYSICAL = 248, 
    STARTING = 249, ENDING = 250, AT = 251, AS = 252, GT_TEXT = 253, LT_TEXT = 254, 
    GE_TEXT = 255, LE_TEXT = 256, EQ_TEXT = 257, NE_TEXT = 258, AND_TEXT = 259, 
    OR_TEXT = 260, NOT_TEXT = 261, AND_EQ = 262, OR_RQ = 263, OR_SRQ = 264, 
    EQUAL = 265, NOTEQUAL = 266, EQUAL_TO = 267, LESS_THAN = 268, GREATER_THAN = 269, 
    LESS_EQUAL = 270, GREATER_EQUAL = 271, STRING = 272, COLON = 273, LINE_NUMBER = 274, 
    FLOAT = 275, LITERAL = 276, LINE_REF = 277, INPUT_PARAM = 278, DATE_CONSTANT = 279, 
    H_CONSTANT = 280, PLUS = 281, MINUS = 282, MULT = 283, DIV = 284, EQ = 285, 
    GT = 286, LT = 287, GE = 288, LE = 289, NE = 290, LPAREN = 291, RPAREN = 292, 
    IDENTIFIER = 293, TRAILING_COMMENT = 294, WS = 295, NL = 296, WS_C = 297, 
    NL_C = 298, COMMA = 299, MOD = 300, AND = 301, OR = 302, XOR = 303, 
    NOT = 304, TILDE = 305, QUESTION = 306, DOT = 307, LBRACK = 308, RBRACK = 309, 
    LBRACE = 310, RBRACE = 311, LABEL = 312
  };

  enum {
    RuleProgram = 0, RuleLineNumberStatement = 1, RuleStatement = 2, RuleLabel = 3, 
    RuleDataDefinition = 4, RuleCompressStatement = 5, RuleCompressEnd = 6, 
    RuleInputStatement = 7, RuleInputOptions = 8, RuleInputUsingMap = 9, 
    RuleVariable = 10, RuleReinputStatement = 11, RuleReinputOptions = 12, 
    RuleSortStatement = 13, RuleExamineStatement = 14, RuleExamineOptions = 15, 
    RuleMoveStatement = 16, RuleMoveOptions = 17, RuleRepeatStatement = 18, 
    RuleDoStatement = 19, RuleStoreStatement = 20, RuleStorePreview2 = 21, 
    RuleStoreCondition = 22, RuleFindStatement = 23, RuleFindQuery = 24, 
    RuleFindNumber = 25, RuleFindPreview1 = 26, RuleFindPreview2 = 27, RuleReadStatement = 28, 
    RuleReadQuery = 29, RuleReadPreview1 = 30, RuleReadPreview2 = 31, RuleUpdateStatement = 32, 
    RuleUpdateStartline = 33, RuleDeleteStatement = 34, RuleGetStatements = 35, 
    RuleGetTabledStatements = 36, RuleGetTabledOptions = 37, RuleGetTransactionStatement = 38, 
    RuleGetSameStatement = 39, RuleHistogramStatement = 40, RuleHistogramQuery = 41, 
    RuleHistogramPreview = 42, RuleHistogramOptions = 43, RuleEndTransaction = 44, 
    RuleBackoutTransaction = 45, RuleReadworkfileStatement = 46, RuleWorkfilenumberOption = 47, 
    RuleReadworkfileOptions = 48, RuleAtEndOfFileStatement = 49, RuleWriteworkfileStatement = 50, 
    RuleCloseworkfileStatement = 51, RuleNoRecordsFoundStatement = 52, RuleAtStartOfDataStatement = 53, 
    RuleFormatStatement = 54, RuleFormatOptions = 55, RuleAssignmentStatement = 56, 
    RuleIncludeStatement = 57, RuleRedefineStatement = 58, RuleRedefineBody = 59, 
    RuleResetStatement = 60, RuleCallnatStatement = 61, RuleSetkeyStatement = 62, 
    RulePerformStatement = 63, RuleSubroutineNames = 64, RuleFetchStatement = 65, 
    RuleCallStatement = 66, RuleForStatement = 67, RuleAcceptRejectIfStatement = 68, 
    RuleDecisionStatement = 69, RuleIfStatement = 70, RuleIfStructuredStatement = 71, 
    RuleElseStructured = 72, RuleIfElseStatement = 73, RuleIfMultilinedStatement = 74, 
    RuleIfSinglelinedStatement = 75, RuleElseMultilinedStatement = 76, RuleElseSinglelinedStatement = 77, 
    RuleOnelinerBody = 78, RuleCondition = 79, RuleOptionalCondition = 80, 
    RuleOperand = 81, RuleNaturalKeywords = 82, RuleLogicalOp = 83, RuleSubroutine = 84, 
    RuleBlockContentSubroutine = 85, RuleSubroutineStatement = 86, RuleFunctionDefinition = 87, 
    RuleBlockContent = 88, RuleValueAssignment = 89, RuleAssignStatement = 90, 
    RuleAddOperation = 91, RuleMultiplyOperation = 92, RuleSubtractOperation = 93, 
    RuleDivideOperation = 94, RuleComputeOperation = 95, RuleArithmaticOperation = 96, 
    RuleOptionalCompute = 97, RuleCalculations = 98, RuleAddContent = 99, 
    RuleCompOp = 100, RuleArithmaticOp = 101, RuleEndStatement = 102, RuleOtherStatement = 103
  };

  explicit NaturalParser(antlr4::TokenStream *input);

  NaturalParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~NaturalParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class LineNumberStatementContext;
  class StatementContext;
  class LabelContext;
  class DataDefinitionContext;
  class CompressStatementContext;
  class CompressEndContext;
  class InputStatementContext;
  class InputOptionsContext;
  class InputUsingMapContext;
  class VariableContext;
  class ReinputStatementContext;
  class ReinputOptionsContext;
  class SortStatementContext;
  class ExamineStatementContext;
  class ExamineOptionsContext;
  class MoveStatementContext;
  class MoveOptionsContext;
  class RepeatStatementContext;
  class DoStatementContext;
  class StoreStatementContext;
  class StorePreview2Context;
  class StoreConditionContext;
  class FindStatementContext;
  class FindQueryContext;
  class FindNumberContext;
  class FindPreview1Context;
  class FindPreview2Context;
  class ReadStatementContext;
  class ReadQueryContext;
  class ReadPreview1Context;
  class ReadPreview2Context;
  class UpdateStatementContext;
  class UpdateStartlineContext;
  class DeleteStatementContext;
  class GetStatementsContext;
  class GetTabledStatementsContext;
  class GetTabledOptionsContext;
  class GetTransactionStatementContext;
  class GetSameStatementContext;
  class HistogramStatementContext;
  class HistogramQueryContext;
  class HistogramPreviewContext;
  class HistogramOptionsContext;
  class EndTransactionContext;
  class BackoutTransactionContext;
  class ReadworkfileStatementContext;
  class WorkfilenumberOptionContext;
  class ReadworkfileOptionsContext;
  class AtEndOfFileStatementContext;
  class WriteworkfileStatementContext;
  class CloseworkfileStatementContext;
  class NoRecordsFoundStatementContext;
  class AtStartOfDataStatementContext;
  class FormatStatementContext;
  class FormatOptionsContext;
  class AssignmentStatementContext;
  class IncludeStatementContext;
  class RedefineStatementContext;
  class RedefineBodyContext;
  class ResetStatementContext;
  class CallnatStatementContext;
  class SetkeyStatementContext;
  class PerformStatementContext;
  class SubroutineNamesContext;
  class FetchStatementContext;
  class CallStatementContext;
  class ForStatementContext;
  class AcceptRejectIfStatementContext;
  class DecisionStatementContext;
  class IfStatementContext;
  class IfStructuredStatementContext;
  class ElseStructuredContext;
  class IfElseStatementContext;
  class IfMultilinedStatementContext;
  class IfSinglelinedStatementContext;
  class ElseMultilinedStatementContext;
  class ElseSinglelinedStatementContext;
  class OnelinerBodyContext;
  class ConditionContext;
  class OptionalConditionContext;
  class OperandContext;
  class NaturalKeywordsContext;
  class LogicalOpContext;
  class SubroutineContext;
  class BlockContentSubroutineContext;
  class SubroutineStatementContext;
  class FunctionDefinitionContext;
  class BlockContentContext;
  class ValueAssignmentContext;
  class AssignStatementContext;
  class AddOperationContext;
  class MultiplyOperationContext;
  class SubtractOperationContext;
  class DivideOperationContext;
  class ComputeOperationContext;
  class ArithmaticOperationContext;
  class OptionalComputeContext;
  class CalculationsContext;
  class AddContentContext;
  class CompOpContext;
  class ArithmaticOpContext;
  class EndStatementContext;
  class OtherStatementContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LineNumberStatementContext *> lineNumberStatement();
    LineNumberStatementContext* lineNumberStatement(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  LineNumberStatementContext : public antlr4::ParserRuleContext {
  public:
    LineNumberStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_NUMBER();
    StatementContext *statement();
    antlr4::tree::TerminalNode *WS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineNumberStatementContext* lineNumberStatement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataDefinitionContext *dataDefinition();
    SubroutineContext *subroutine();
    FunctionDefinitionContext *functionDefinition();
    NoRecordsFoundStatementContext *noRecordsFoundStatement();
    DecisionStatementContext *decisionStatement();
    ValueAssignmentContext *valueAssignment();
    ForStatementContext *forStatement();
    IfStatementContext *ifStatement();
    PerformStatementContext *performStatement();
    CallnatStatementContext *callnatStatement();
    ExamineStatementContext *examineStatement();
    MoveStatementContext *moveStatement();
    FindStatementContext *findStatement();
    ReadStatementContext *readStatement();
    StoreStatementContext *storeStatement();
    UpdateStatementContext *updateStatement();
    DeleteStatementContext *deleteStatement();
    GetStatementsContext *getStatements();
    HistogramStatementContext *histogramStatement();
    EndTransactionContext *endTransaction();
    BackoutTransactionContext *backoutTransaction();
    ReadworkfileStatementContext *readworkfileStatement();
    WriteworkfileStatementContext *writeworkfileStatement();
    CloseworkfileStatementContext *closeworkfileStatement();
    InputStatementContext *inputStatement();
    ReinputStatementContext *reinputStatement();
    CalculationsContext *calculations();
    AssignStatementContext *assignStatement();
    SetkeyStatementContext *setkeyStatement();
    RedefineStatementContext *redefineStatement();
    ResetStatementContext *resetStatement();
    SortStatementContext *sortStatement();
    CompressStatementContext *compressStatement();
    DoStatementContext *doStatement();
    RepeatStatementContext *repeatStatement();
    AtStartOfDataStatementContext *atStartOfDataStatement();
    FormatStatementContext *formatStatement();
    AssignmentStatementContext *assignmentStatement();
    IncludeStatementContext *includeStatement();
    FetchStatementContext *fetchStatement();
    CallStatementContext *callStatement();
    OtherStatementContext *otherStatement();
    LabelContext *label();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LABEL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  DataDefinitionContext : public antlr4::ParserRuleContext {
  public:
    DataDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE_DATA();
    antlr4::tree::TerminalNode *END_DEFINE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataDefinitionContext* dataDefinition();

  class  CompressStatementContext : public antlr4::ParserRuleContext {
  public:
    CompressStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *INTO();
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    CompressEndContext *compressEnd();
    std::vector<antlr4::tree::TerminalNode *> NUMERIC();
    antlr4::tree::TerminalNode* NUMERIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FULL();
    antlr4::tree::TerminalNode* FULL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompressStatementContext* compressStatement();

  class  CompressEndContext : public antlr4::ParserRuleContext {
  public:
    CompressEndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVING_SPACE();
    antlr4::tree::TerminalNode *LEAVING_NO_SPACE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DELIMITER();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompressEndContext* compressEnd();

  class  InputStatementContext : public antlr4::ParserRuleContext {
  public:
    InputStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    InputUsingMapContext *inputUsingMap();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<InputOptionsContext *> inputOptions();
    InputOptionsContext* inputOptions(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputStatementContext* inputStatement();

  class  InputOptionsContext : public antlr4::ParserRuleContext {
  public:
    InputOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FIELD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputOptionsContext* inputOptions();

  class  InputUsingMapContext : public antlr4::ParserRuleContext {
  public:
    InputUsingMapContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *STRING();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *USING();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputUsingMapContext* inputUsingMap();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *LINE_REF();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ReinputStatementContext : public antlr4::ParserRuleContext {
  public:
    ReinputStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REINPUT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *FULL();
    std::vector<ReinputOptionsContext *> reinputOptions();
    ReinputOptionsContext* reinputOptions(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *ALARM();
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReinputStatementContext* reinputStatement();

  class  ReinputOptionsContext : public antlr4::ParserRuleContext {
  public:
    ReinputOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *WITH_TEXT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *LINE_NUMBER();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *USING_HELP();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReinputOptionsContext* reinputOptions();

  class  SortStatementContext : public antlr4::ParserRuleContext {
  public:
    SortStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SORT();
    antlr4::tree::TerminalNode *END_SORT();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SortStatementContext* sortStatement();

  class  ExamineStatementContext : public antlr4::ParserRuleContext {
  public:
    ExamineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXAMINE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<ExamineOptionsContext *> examineOptions();
    ExamineOptionsContext* examineOptions(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExamineStatementContext* examineStatement();

  class  ExamineOptionsContext : public antlr4::ParserRuleContext {
  public:
    ExamineOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *AND_TEXT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *GIVING();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ABSOLUTE();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *CHARPOSITION();
    antlr4::tree::TerminalNode *CHARLENGTH();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *TRANSLATE();
    antlr4::tree::TerminalNode *DELIMITER();
    antlr4::tree::TerminalNode *UPPPER_CASE();
    antlr4::tree::TerminalNode *LOWER_CASE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *INVERTED();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *PATTERN();
    antlr4::tree::TerminalNode *VALUE_OF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExamineOptionsContext* examineOptions();

  class  MoveStatementContext : public antlr4::ParserRuleContext {
  public:
    MoveStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOVE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<MoveOptionsContext *> moveOptions();
    MoveOptionsContext* moveOptions(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MoveStatementContext* moveStatement();

  class  MoveOptionsContext : public antlr4::ParserRuleContext {
  public:
    MoveOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperandContext *operand();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *ROUNDED();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *BY_NAME();
    antlr4::tree::TerminalNode *BY_POSITION();
    antlr4::tree::TerminalNode *EDITED();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *JUSTIFIED();
    antlr4::tree::TerminalNode *NORMALIZED();
    antlr4::tree::TerminalNode *ENCODED();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *INDEXED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MoveOptionsContext* moveOptions();

  class  RepeatStatementContext : public antlr4::ParserRuleContext {
  public:
    RepeatStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LOOP();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatStatementContext* repeatStatement();

  class  DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DOEND();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoStatementContext* doStatement();

  class  StoreStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *tableName = nullptr;
    StoreStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FILE();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SET();
    std::vector<StorePreview2Context *> storePreview2();
    StorePreview2Context* storePreview2(size_t i);
    std::vector<StoreConditionContext *> storeCondition();
    StoreConditionContext* storeCondition(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StoreStatementContext* storeStatement();

  class  StorePreview2Context : public antlr4::ParserRuleContext {
  public:
    StorePreview2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *COLON();
    OperandContext *operand();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *GIVING();
    antlr4::tree::TerminalNode *NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorePreview2Context* storePreview2();

  class  StoreConditionContext : public antlr4::ParserRuleContext {
  public:
    StoreConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StoreConditionContext* storeCondition();

  class  FindStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *endBlock = nullptr;
    FindStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FindQueryContext *findQuery();
    BlockContentContext *blockContent();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *END_FIND();
    FindNumberContext *findNumber();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FindStatementContext* findStatement();

  class  FindQueryContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *tableName = nullptr;
    FindQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIND();
    FindPreview2Context *findPreview2();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<FindPreview1Context *> findPreview1();
    FindPreview1Context* findPreview1(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FindQueryContext* findQuery();

  class  FindNumberContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *tableName = nullptr;
    FindNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIND();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *NUMBER();
    FindPreview2Context *findPreview2();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<FindPreview1Context *> findPreview1();
    FindPreview1Context* findPreview1(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FindNumberContext* findNumber();

  class  FindPreview1Context : public antlr4::ParserRuleContext {
  public:
    FindPreview1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *UNIQUE_LEX();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LINE_REF();
    VariableContext *variable();
    antlr4::tree::TerminalNode *MULTI_FETCH();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *LINE_NUMBER();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    std::vector<antlr4::tree::TerminalNode *> RECORD();
    antlr4::tree::TerminalNode* RECORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RECORDS();
    antlr4::tree::TerminalNode* RECORDS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FindPreview1Context* findPreview1();

  class  FindPreview2Context : public antlr4::ParserRuleContext {
  public:
    FindPreview2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PASSWORD();
    antlr4::tree::TerminalNode* PASSWORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CIPHER();
    antlr4::tree::TerminalNode* CIPHER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LIMIT();
    antlr4::tree::TerminalNode* LIMIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COUPLED();
    antlr4::tree::TerminalNode* COUPLED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STARTING_WITH();
    antlr4::tree::TerminalNode* STARTING_WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SORTED();
    antlr4::tree::TerminalNode* SORTED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RETAIN_AS();
    antlr4::tree::TerminalNode* RETAIN_AS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHERE();
    antlr4::tree::TerminalNode* WHERE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VIA();
    antlr4::tree::TerminalNode* VIA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THRU();
    antlr4::tree::TerminalNode* THRU(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESCENDING();
    antlr4::tree::TerminalNode* DESCENDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY_NAME();
    antlr4::tree::TerminalNode* BY_NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY_POSITION();
    antlr4::tree::TerminalNode* BY_POSITION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BUT();
    antlr4::tree::TerminalNode* BUT(size_t i);
    std::vector<CompOpContext *> compOp();
    CompOpContext* compOp(size_t i);
    std::vector<LogicalOpContext *> logicalOp();
    LogicalOpContext* logicalOp(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FindPreview2Context* findPreview2();

  class  ReadStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *endBlock = nullptr;
    ReadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReadQueryContext *readQuery();
    BlockContentContext *blockContent();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *END_READ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadStatementContext* readStatement();

  class  ReadQueryContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *tableName = nullptr;
    ReadQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    ReadPreview2Context *readPreview2();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<ReadPreview1Context *> readPreview1();
    ReadPreview1Context* readPreview1(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadQueryContext* readQuery();

  class  ReadPreview1Context : public antlr4::ParserRuleContext {
  public:
    ReadPreview1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LINE_REF();
    VariableContext *variable();
    antlr4::tree::TerminalNode *MULTI_FETCH();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *LINE_NUMBER();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    std::vector<antlr4::tree::TerminalNode *> RECORD();
    antlr4::tree::TerminalNode* RECORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RECORDS();
    antlr4::tree::TerminalNode* RECORDS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadPreview1Context* readPreview1();

  class  ReadPreview2Context : public antlr4::ParserRuleContext {
  public:
    ReadPreview2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PASSWORD();
    antlr4::tree::TerminalNode* PASSWORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CIPHER();
    antlr4::tree::TerminalNode* CIPHER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REPOSITION();
    antlr4::tree::TerminalNode* REPOSITION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STARTING_WITH();
    antlr4::tree::TerminalNode* STARTING_WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHERE();
    antlr4::tree::TerminalNode* WHERE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STARTING();
    antlr4::tree::TerminalNode* STARTING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENDING();
    antlr4::tree::TerminalNode* ENDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AT();
    antlr4::tree::TerminalNode* AT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THRU();
    antlr4::tree::TerminalNode* THRU(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESCENDING();
    antlr4::tree::TerminalNode* DESCENDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY_NAME();
    antlr4::tree::TerminalNode* BY_NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY_POSITION();
    antlr4::tree::TerminalNode* BY_POSITION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PHYSICAL();
    antlr4::tree::TerminalNode* PHYSICAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASCENDING();
    antlr4::tree::TerminalNode* ASCENDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DYNAMIC();
    antlr4::tree::TerminalNode* DYNAMIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEQUENCE();
    antlr4::tree::TerminalNode* SEQUENCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STARTING_FROM();
    antlr4::tree::TerminalNode* STARTING_FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENDING_AT();
    antlr4::tree::TerminalNode* ENDING_AT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BUT();
    antlr4::tree::TerminalNode* BUT(size_t i);
    std::vector<CompOpContext *> compOp();
    CompOpContext* compOp(size_t i);
    std::vector<LogicalOpContext *> logicalOp();
    LogicalOpContext* logicalOp(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadPreview2Context* readPreview2();

  class  UpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    UpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UpdateStartlineContext *updateStartline();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<CalculationsContext *> calculations();
    CalculationsContext* calculations(size_t i);
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *SAME();
    antlr4::tree::TerminalNode *RECORD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateStatementContext* updateStatement();

  class  UpdateStartlineContext : public antlr4::ParserRuleContext {
  public:
    UpdateStartlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *LINE_REF();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateStartlineContext* updateStartline();

  class  DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *LINE_REF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementContext* deleteStatement();

  class  GetStatementsContext : public antlr4::ParserRuleContext {
  public:
    GetStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GetTabledStatementsContext *getTabledStatements();
    GetTransactionStatementContext *getTransactionStatement();
    GetSameStatementContext *getSameStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetStatementsContext* getStatements();

  class  GetTabledStatementsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *tableName = nullptr;
    NaturalParser::VariableContext *filterCondition = nullptr;
    GetTabledStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    VariableContext *variable();
    std::vector<GetTabledOptionsContext *> getTabledOptions();
    GetTabledOptionsContext* getTabledOptions(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetTabledStatementsContext* getTabledStatements();

  class  GetTabledOptionsContext : public antlr4::ParserRuleContext {
  public:
    GetTabledOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *RECORDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetTabledOptionsContext* getTabledOptions();

  class  GetTransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    GetTransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET_TRANSACTION_DATA();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetTransactionStatementContext* getTransactionStatement();

  class  GetSameStatementContext : public antlr4::ParserRuleContext {
  public:
    GetSameStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET_SAME();
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *LINE_REF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetSameStatementContext* getSameStatement();

  class  HistogramStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *endBlock = nullptr;
    HistogramStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HistogramQueryContext *histogramQuery();
    antlr4::tree::TerminalNode *END_HISTOGRAM();
    antlr4::tree::TerminalNode *LOOP();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramStatementContext* histogramStatement();

  class  HistogramQueryContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *tableName = nullptr;
    HistogramQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HISTOGRAM();
    HistogramOptionsContext *histogramOptions();
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<HistogramPreviewContext *> histogramPreview();
    HistogramPreviewContext* histogramPreview(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramQueryContext* histogramQuery();

  class  HistogramPreviewContext : public antlr4::ParserRuleContext {
  public:
    HistogramPreviewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *UNIQUE_LEX();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *LINE_REF();
    antlr4::tree::TerminalNode *MULTI_FETCH();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *LINE_NUMBER();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramPreviewContext* histogramPreview();

  class  HistogramOptionsContext : public antlr4::ParserRuleContext {
  public:
    HistogramOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_REF();
    antlr4::tree::TerminalNode* LINE_REF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PASSWORD();
    antlr4::tree::TerminalNode* PASSWORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THRU();
    antlr4::tree::TerminalNode* THRU(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VALUE();
    antlr4::tree::TerminalNode* VALUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FIELD();
    antlr4::tree::TerminalNode* FIELD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OF();
    antlr4::tree::TerminalNode* OF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASCENDING();
    antlr4::tree::TerminalNode* ASCENDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESCENDING();
    antlr4::tree::TerminalNode* DESCENDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DYNAMIC();
    antlr4::tree::TerminalNode* DYNAMIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEQUENCE();
    antlr4::tree::TerminalNode* SEQUENCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STARTING();
    antlr4::tree::TerminalNode* STARTING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STARTING_WITH();
    antlr4::tree::TerminalNode* STARTING_WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STARTING_FROM();
    antlr4::tree::TerminalNode* STARTING_FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENDING_AT();
    antlr4::tree::TerminalNode* ENDING_AT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHERE();
    antlr4::tree::TerminalNode* WHERE(size_t i);
    std::vector<CompOpContext *> compOp();
    CompOpContext* compOp(size_t i);
    std::vector<LogicalOpContext *> logicalOp();
    LogicalOpContext* logicalOp(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramOptionsContext* histogramOptions();

  class  EndTransactionContext : public antlr4::ParserRuleContext {
  public:
    EndTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END_TRANSACTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndTransactionContext* endTransaction();

  class  BackoutTransactionContext : public antlr4::ParserRuleContext {
  public:
    BackoutTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKOUT_TRANSACTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BackoutTransactionContext* backoutTransaction();

  class  ReadworkfileStatementContext : public antlr4::ParserRuleContext {
  public:
    ReadworkfileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    WorkfilenumberOptionContext *workfilenumberOption();
    ReadworkfileOptionsContext *readworkfileOptions();
    AtEndOfFileStatementContext *atEndOfFileStatement();
    antlr4::tree::TerminalNode *READ_WORK_FILE();
    antlr4::tree::TerminalNode *READ_WORK();
    antlr4::tree::TerminalNode *ONCE();
    antlr4::tree::TerminalNode *END_ALL();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *END_WORK();
    antlr4::tree::TerminalNode *LOOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadworkfileStatementContext* readworkfileStatement();

  class  WorkfilenumberOptionContext : public antlr4::ParserRuleContext {
  public:
    WorkfilenumberOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WorkfilenumberOptionContext* workfilenumberOption();

  class  ReadworkfileOptionsContext : public antlr4::ParserRuleContext {
  public:
    ReadworkfileOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_REF();
    antlr4::tree::TerminalNode* LINE_REF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RECORD();
    antlr4::tree::TerminalNode* RECORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILLER();
    antlr4::tree::TerminalNode* FILLER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFFSET();
    antlr4::tree::TerminalNode* OFFSET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SELECT();
    antlr4::tree::TerminalNode* SELECT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GIVING();
    antlr4::tree::TerminalNode* GIVING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LENGTH();
    antlr4::tree::TerminalNode* LENGTH(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadworkfileOptionsContext* readworkfileOptions();

  class  AtEndOfFileStatementContext : public antlr4::ParserRuleContext {
  public:
    AtEndOfFileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_END_OF_FILE();
    antlr4::tree::TerminalNode *END_ENDFILE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtEndOfFileStatementContext* atEndOfFileStatement();

  class  WriteworkfileStatementContext : public antlr4::ParserRuleContext {
  public:
    WriteworkfileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    WorkfilenumberOptionContext *workfilenumberOption();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *WRITE_WORK_FILE();
    antlr4::tree::TerminalNode *WRITE_WORK();
    antlr4::tree::TerminalNode *VARIABLE();
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WriteworkfileStatementContext* writeworkfileStatement();

  class  CloseworkfileStatementContext : public antlr4::ParserRuleContext {
  public:
    CloseworkfileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WS();
    WorkfilenumberOptionContext *workfilenumberOption();
    antlr4::tree::TerminalNode *CLOSE_WORK_FILE();
    antlr4::tree::TerminalNode *CLOSE_WORK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CloseworkfileStatementContext* closeworkfileStatement();

  class  NoRecordsFoundStatementContext : public antlr4::ParserRuleContext {
  public:
    NoRecordsFoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *END_NOREC();
    antlr4::tree::TerminalNode *NO_RECORDS_FOUND();
    antlr4::tree::TerminalNode *NO_RECORD_FOUND();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoRecordsFoundStatementContext* noRecordsFoundStatement();

  class  AtStartOfDataStatementContext : public antlr4::ParserRuleContext {
  public:
    AtStartOfDataStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_START_OF_DATA();
    antlr4::tree::TerminalNode *END_START();
    antlr4::tree::TerminalNode *DOEND();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *DO();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtStartOfDataStatementContext* atStartOfDataStatement();

  class  FormatStatementContext : public antlr4::ParserRuleContext {
  public:
    FormatStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FormatOptionsContext *formatOptions();
    std::vector<AssignmentStatementContext *> assignmentStatement();
    AssignmentStatementContext* assignmentStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormatStatementContext* formatStatement();

  class  FormatOptionsContext : public antlr4::ParserRuleContext {
  public:
    FormatOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *LINE_REF();
    antlr4::tree::TerminalNode *WS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormatOptionsContext* formatOptions();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    CompOpContext *compOp();
    antlr4::tree::TerminalNode *LINE_NUMBER();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentStatementContext* assignmentStatement();

  class  IncludeStatementContext : public antlr4::ParserRuleContext {
  public:
    IncludeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *LINE_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncludeStatementContext* includeStatement();

  class  RedefineStatementContext : public antlr4::ParserRuleContext {
  public:
    RedefineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REDEFINE();
    RedefineBodyContext *redefineBody();
    antlr4::tree::TerminalNode *WS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RedefineStatementContext* redefineStatement();

  class  RedefineBodyContext : public antlr4::ParserRuleContext {
  public:
    RedefineBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RedefineBodyContext* redefineBody();

  class  ResetStatementContext : public antlr4::ParserRuleContext {
  public:
    ResetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    RedefineBodyContext *redefineBody();
    antlr4::tree::TerminalNode *WS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetStatementContext* resetStatement();

  class  CallnatStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *subprogramName = nullptr;
    CallnatStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALLNAT();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallnatStatementContext* callnatStatement();

  class  SetkeyStatementContext : public antlr4::ParserRuleContext {
  public:
    SetkeyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_KEY();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetkeyStatementContext* setkeyStatement();

  class  PerformStatementContext : public antlr4::ParserRuleContext {
  public:
    NaturalParser::SubroutineNamesContext *subroutineName = nullptr;
    PerformStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERFORM();
    SubroutineNamesContext *subroutineNames();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *USING();
    VariableContext *variable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PerformStatementContext* performStatement();

  class  SubroutineNamesContext : public antlr4::ParserRuleContext {
  public:
    SubroutineNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *TRANSLATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubroutineNamesContext* subroutineNames();

  class  FetchStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *subprogramName = nullptr;
    FetchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *RETURN();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FetchStatementContext* fetchStatement();

  class  CallStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *subprogramName = nullptr;
    CallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *INTERFACE4();
    antlr4::tree::TerminalNode *USING();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallStatementContext* callStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ConditionContext *condition();
    antlr4::tree::TerminalNode *TO();
    OperandContext *operand();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *END_FOR();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  AcceptRejectIfStatementContext : public antlr4::ParserRuleContext {
  public:
    AcceptRejectIfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionContext *condition();
    antlr4::tree::TerminalNode *ACCEPT_IF();
    antlr4::tree::TerminalNode *REJECT_IF();
    antlr4::tree::TerminalNode *WS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AcceptRejectIfStatementContext* acceptRejectIfStatement();

  class  DecisionStatementContext : public antlr4::ParserRuleContext {
  public:
    DecisionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *END_DECIDE();
    antlr4::tree::TerminalNode *DECIDE_FOR();
    antlr4::tree::TerminalNode *DECIDE_ON();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *WHEN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *VALUE_OF();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *LINE_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecisionStatementContext* decisionStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfStructuredStatementContext *ifStructuredStatement();
    IfElseStatementContext *ifElseStatement();
    IfMultilinedStatementContext *ifMultilinedStatement();
    IfSinglelinedStatementContext *ifSinglelinedStatement();
    AcceptRejectIfStatementContext *acceptRejectIfStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  IfStructuredStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStructuredStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ConditionContext *condition();
    antlr4::tree::TerminalNode *END_IF();
    ElseStructuredContext *elseStructured();
    antlr4::tree::TerminalNode *THEN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStructuredStatementContext* ifStructuredStatement();

  class  ElseStructuredContext : public antlr4::ParserRuleContext {
  public:
    ElseStructuredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *END_IF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStructuredContext* elseStructured();

  class  IfElseStatementContext : public antlr4::ParserRuleContext {
  public:
    IfElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ConditionContext *condition();
    DoStatementContext *doStatement();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    ElseMultilinedStatementContext *elseMultilinedStatement();
    ElseSinglelinedStatementContext *elseSinglelinedStatement();
    antlr4::tree::TerminalNode *THEN();
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfElseStatementContext* ifElseStatement();

  class  IfMultilinedStatementContext : public antlr4::ParserRuleContext {
  public:
    IfMultilinedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ConditionContext *condition();
    antlr4::tree::TerminalNode *THEN();
    DoStatementContext *doStatement();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    ElseMultilinedStatementContext *elseMultilinedStatement();
    ElseSinglelinedStatementContext *elseSinglelinedStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfMultilinedStatementContext* ifMultilinedStatement();

  class  IfSinglelinedStatementContext : public antlr4::ParserRuleContext {
  public:
    IfSinglelinedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ConditionContext *condition();
    OnelinerBodyContext *onelinerBody();
    antlr4::tree::TerminalNode *THEN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    ElseMultilinedStatementContext *elseMultilinedStatement();
    ElseSinglelinedStatementContext *elseSinglelinedStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfSinglelinedStatementContext* ifSinglelinedStatement();

  class  ElseMultilinedStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseMultilinedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    DoStatementContext *doStatement();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *LINE_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseMultilinedStatementContext* elseMultilinedStatement();

  class  ElseSinglelinedStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseSinglelinedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    OnelinerBodyContext *onelinerBody();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *LINE_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseSinglelinedStatementContext* elseSinglelinedStatement();

  class  OnelinerBodyContext : public antlr4::ParserRuleContext {
  public:
    OnelinerBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *LINE_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnelinerBodyContext* onelinerBody();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    LogicalOpContext *logicalOp();
    CompOpContext *compOp();
    ArithmaticOpContext *arithmaticOp();
    OptionalConditionContext *optionalCondition();
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);
    antlr4::tree::TerminalNode *NOT_TEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  OptionalConditionContext : public antlr4::ParserRuleContext {
  public:
    OptionalConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperandContext *operand();
    LogicalOpContext *logicalOp();
    CompOpContext *compOp();
    ArithmaticOpContext *arithmaticOp();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    OptionalConditionContext *optionalCondition();
    std::vector<antlr4::tree::TerminalNode *> LINE_NUMBER();
    antlr4::tree::TerminalNode* LINE_NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalConditionContext* optionalCondition();

  class  OperandContext : public antlr4::ParserRuleContext {
  public:
    OperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LINE_NUMBER();
    antlr4::tree::TerminalNode *FLOAT();
    NaturalKeywordsContext *naturalKeywords();
    antlr4::tree::TerminalNode *LPAREN();
    OperandContext *operand();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *DATE_CONSTANT();
    antlr4::tree::TerminalNode *INPUT_PARAM();
    antlr4::tree::TerminalNode *H_CONSTANT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperandContext* operand();

  class  NaturalKeywordsContext : public antlr4::ParserRuleContext {
  public:
    NaturalKeywordsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *LINE_REF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NaturalKeywordsContext* naturalKeywords();

  class  LogicalOpContext : public antlr4::ParserRuleContext {
  public:
    LogicalOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND_TEXT();
    antlr4::tree::TerminalNode *OR_TEXT();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND_EQ();
    antlr4::tree::TerminalNode *OR_RQ();
    antlr4::tree::TerminalNode *OR_SRQ();
    antlr4::tree::TerminalNode *NOT_TEXT();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *EQUAL_TO();
    antlr4::tree::TerminalNode *LESS_THAN();
    antlr4::tree::TerminalNode *GREATER_THAN();
    antlr4::tree::TerminalNode *LESS_EQUAL();
    antlr4::tree::TerminalNode *GREATER_EQUAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOpContext* logicalOp();

  class  SubroutineContext : public antlr4::ParserRuleContext {
  public:
    NaturalParser::SubroutineNamesContext *subroutineName = nullptr;
    NaturalParser::BlockContentSubroutineContext *subroutineBody = nullptr;
    SubroutineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE_SUBROUTINE();
    SubroutineNamesContext *subroutineNames();
    BlockContentSubroutineContext *blockContentSubroutine();
    antlr4::tree::TerminalNode *END_SUBROUTINE();
    antlr4::tree::TerminalNode *RETURN();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubroutineContext* subroutine();

  class  BlockContentSubroutineContext : public antlr4::ParserRuleContext {
  public:
    BlockContentSubroutineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubroutineStatementContext *> subroutineStatement();
    SubroutineStatementContext* subroutineStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *TRAILING_COMMENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContentSubroutineContext* blockContentSubroutine();

  class  SubroutineStatementContext : public antlr4::ParserRuleContext {
  public:
    SubroutineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataDefinitionContext *dataDefinition();
    SubroutineContext *subroutine();
    FunctionDefinitionContext *functionDefinition();
    ValueAssignmentContext *valueAssignment();
    ForStatementContext *forStatement();
    IfStatementContext *ifStatement();
    PerformStatementContext *performStatement();
    CallnatStatementContext *callnatStatement();
    RedefineStatementContext *redefineStatement();
    ResetStatementContext *resetStatement();
    ExamineStatementContext *examineStatement();
    MoveStatementContext *moveStatement();
    FindStatementContext *findStatement();
    ReadStatementContext *readStatement();
    StoreStatementContext *storeStatement();
    UpdateStatementContext *updateStatement();
    DeleteStatementContext *deleteStatement();
    GetStatementsContext *getStatements();
    HistogramStatementContext *histogramStatement();
    EndTransactionContext *endTransaction();
    BackoutTransactionContext *backoutTransaction();
    ReadworkfileStatementContext *readworkfileStatement();
    WriteworkfileStatementContext *writeworkfileStatement();
    CloseworkfileStatementContext *closeworkfileStatement();
    InputStatementContext *inputStatement();
    ReinputStatementContext *reinputStatement();
    CalculationsContext *calculations();
    AssignStatementContext *assignStatement();
    SortStatementContext *sortStatement();
    CompressStatementContext *compressStatement();
    DoStatementContext *doStatement();
    RepeatStatementContext *repeatStatement();
    AtStartOfDataStatementContext *atStartOfDataStatement();
    FormatStatementContext *formatStatement();
    AssignmentStatementContext *assignmentStatement();
    IncludeStatementContext *includeStatement();
    FetchStatementContext *fetchStatement();
    CallStatementContext *callStatement();
    OtherStatementContext *otherStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubroutineStatementContext* subroutineStatement();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *functionName = nullptr;
    antlr4::Token *returnType = nullptr;
    NaturalParser::BlockContentContext *functionBody = nullptr;
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE_FUNCTION();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *END_FUNCTION();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    BlockContentContext *blockContent();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  BlockContentContext : public antlr4::ParserRuleContext {
  public:
    BlockContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *TRAILING_COMMENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContentContext* blockContent();

  class  ValueAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ValueAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ESCAPE_BOTTOM();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *LINE_NUMBER();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *EQ();
    ValueAssignmentContext *valueAssignment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueAssignmentContext* valueAssignment();

  class  AssignStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *ROUNDED();
    antlr4::tree::TerminalNode *COLON();
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignStatementContext* assignStatement();

  class  AddOperationContext : public antlr4::ParserRuleContext {
  public:
    AddOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    std::vector<AddContentContext *> addContent();
    AddContentContext* addContent(size_t i);
    antlr4::tree::TerminalNode *NL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddOperationContext* addOperation();

  class  MultiplyOperationContext : public antlr4::ParserRuleContext {
  public:
    MultiplyOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTIPLY();
    std::vector<AddContentContext *> addContent();
    AddContentContext* addContent(size_t i);
    antlr4::tree::TerminalNode *NL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplyOperationContext* multiplyOperation();

  class  SubtractOperationContext : public antlr4::ParserRuleContext {
  public:
    SubtractOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBTRACT();
    std::vector<AddContentContext *> addContent();
    AddContentContext* addContent(size_t i);
    antlr4::tree::TerminalNode *NL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubtractOperationContext* subtractOperation();

  class  DivideOperationContext : public antlr4::ParserRuleContext {
  public:
    DivideOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIVIDE();
    std::vector<AddContentContext *> addContent();
    AddContentContext* addContent(size_t i);
    antlr4::tree::TerminalNode *NL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DivideOperationContext* divideOperation();

  class  ComputeOperationContext : public antlr4::ParserRuleContext {
  public:
    ComputeOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPUTE();
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ();
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    ArithmaticOpContext *arithmaticOp();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *ROUNDED();
    antlr4::tree::TerminalNode *COLON();
    OptionalComputeContext *optionalCompute();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComputeOperationContext* computeOperation();

  class  ArithmaticOperationContext : public antlr4::ParserRuleContext {
  public:
    ArithmaticOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQ();
    std::vector<OperandContext *> operand();
    OperandContext* operand(size_t i);
    ArithmaticOpContext *arithmaticOp();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *COLON();
    OptionalComputeContext *optionalCompute();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArithmaticOperationContext* arithmaticOperation();

  class  OptionalComputeContext : public antlr4::ParserRuleContext {
  public:
    OptionalComputeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArithmaticOpContext *arithmaticOp();
    OperandContext *operand();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    OptionalComputeContext *optionalCompute();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalComputeContext* optionalCompute();

  class  CalculationsContext : public antlr4::ParserRuleContext {
  public:
    CalculationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddOperationContext *addOperation();
    SubtractOperationContext *subtractOperation();
    MultiplyOperationContext *multiplyOperation();
    DivideOperationContext *divideOperation();
    ComputeOperationContext *computeOperation();
    ArithmaticOperationContext *arithmaticOperation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CalculationsContext* calculations();

  class  AddContentContext : public antlr4::ParserRuleContext {
  public:
    AddContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LITERAL();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *LINE_NUMBER();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *GIVING();
    antlr4::tree::TerminalNode *ROUNDED();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddContentContext* addContent();

  class  CompOpContext : public antlr4::ParserRuleContext {
  public:
    CompOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT_TEXT();
    antlr4::tree::TerminalNode *LT_TEXT();
    antlr4::tree::TerminalNode *GE_TEXT();
    antlr4::tree::TerminalNode *LE_TEXT();
    antlr4::tree::TerminalNode *EQ_TEXT();
    antlr4::tree::TerminalNode *NE_TEXT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompOpContext* compOp();

  class  ArithmaticOpContext : public antlr4::ParserRuleContext {
  public:
    ArithmaticOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArithmaticOpContext* arithmaticOp();

  class  EndStatementContext : public antlr4::ParserRuleContext {
  public:
    EndStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *FIND();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *GET_SAME();
    antlr4::tree::TerminalNode *PASSW();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *STORE();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *END_TRANSACTION();
    antlr4::tree::TerminalNode *BACKOUT_TRANSACTION();
    antlr4::tree::TerminalNode *GET_TRANSACTION_DATA();
    antlr4::tree::TerminalNode *RETRY();
    antlr4::tree::TerminalNode *AT_START_OF_DATA();
    antlr4::tree::TerminalNode *AT_END_OF_DATA();
    antlr4::tree::TerminalNode *AT_BREAK();
    antlr4::tree::TerminalNode *BEFORE_BREAK_PROCESSING();
    antlr4::tree::TerminalNode *PERFORM_BREAK_PROCESSING();
    antlr4::tree::TerminalNode *CALLDBPROC();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *PROCESS_SQL();
    antlr4::tree::TerminalNode *READ_RESULT_SET();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *COMPUTE();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUBTRACT();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MOVE();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *SEPARATE();
    antlr4::tree::TerminalNode *EXAMINE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *SORT();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *DISPLAY();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *WRITE_TITLE();
    antlr4::tree::TerminalNode *WRITE_TRAILER();
    antlr4::tree::TerminalNode *AT_TOP_OF_PAGE();
    antlr4::tree::TerminalNode *AT_END_OF_PAGE();
    antlr4::tree::TerminalNode *EJECT();
    antlr4::tree::TerminalNode *NEWPAGE();
    antlr4::tree::TerminalNode *SUSPEND_IDENTICAL_SUPPRESS();
    antlr4::tree::TerminalNode *DEFINE_PRINTER();
    antlr4::tree::TerminalNode *CLOSE_PRINTER();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *REINPUT();
    antlr4::tree::TerminalNode *DEFINE_WINDOW();
    antlr4::tree::TerminalNode *SET_WINDOW();
    antlr4::tree::TerminalNode *PROCESS_PAGE();
    antlr4::tree::TerminalNode *PROCESS_PAGE_USING();
    antlr4::tree::TerminalNode *PROCESS_PAGE_UPDATE();
    antlr4::tree::TerminalNode *PROCESS_PAGE_MODAL();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IF_SELECTION();
    antlr4::tree::TerminalNode *DECIDE_FOR();
    antlr4::tree::TerminalNode *DECIDE_ON();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CALLNAT();
    antlr4::tree::TerminalNode *CALL_FILE();
    antlr4::tree::TerminalNode *CALL_LOOP();
    antlr4::tree::TerminalNode *DEFINE_SUBROUTINE();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *PERFORM();
    antlr4::tree::TerminalNode *PROCESS_COMMAND();
    antlr4::tree::TerminalNode *RUN();
    antlr4::tree::TerminalNode *DEFINE_FUNCTION();
    antlr4::tree::TerminalNode *DEFINE_PROTOTYPE();
    antlr4::tree::TerminalNode *FUNCTION_CALL();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *TERMINATE();
    antlr4::tree::TerminalNode *WRITE_WORK_FILE();
    antlr4::tree::TerminalNode *DOWNLOAD_PC_FILE();
    antlr4::tree::TerminalNode *READ_WORK_FILE();
    antlr4::tree::TerminalNode *UPLOAD_PC_FILE();
    antlr4::tree::TerminalNode *CLOSE_WORK_FILE();
    antlr4::tree::TerminalNode *CLOSE_PC_FILE();
    antlr4::tree::TerminalNode *DEFINE_WORK_FILE();
    antlr4::tree::TerminalNode *DEFINE_CLASS();
    antlr4::tree::TerminalNode *CREATE_OBJECT();
    antlr4::tree::TerminalNode *SEND_METHOD();
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *EXPAND();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *RESIZE();
    antlr4::tree::TerminalNode *OPEN_CONVERSATION();
    antlr4::tree::TerminalNode *CLOSE_CONVERSATION();
    antlr4::tree::TerminalNode *DEFINE_DATA_CONTEXT();
    antlr4::tree::TerminalNode *PARSE();
    antlr4::tree::TerminalNode *REQUEST_DOCUMENT();
    antlr4::tree::TerminalNode *DEFINE_DATA();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *ON_ERROR();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *SET_CONTROL();
    antlr4::tree::TerminalNode *SET_KEY();
    antlr4::tree::TerminalNode *SET_GLOBALS();
    antlr4::tree::TerminalNode *SET_TIME();
    antlr4::tree::TerminalNode *STACK();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DOEND();
    antlr4::tree::TerminalNode *OBTAIN();
    antlr4::tree::TerminalNode *REDEFINE();
    antlr4::tree::TerminalNode *END_START();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndStatementContext* endStatement();

  class  OtherStatementContext : public antlr4::ParserRuleContext {
  public:
    OtherStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIDE_FOR();
    antlr4::tree::TerminalNode* DECIDE_FOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECIDE_ON();
    antlr4::tree::TerminalNode* DECIDE_ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFINE_SUBROUTINE();
    antlr4::tree::TerminalNode* DEFINE_SUBROUTINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFINE_FUNCTION();
    antlr4::tree::TerminalNode* DEFINE_FUNCTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RETURN();
    antlr4::tree::TerminalNode* RETURN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VALUE();
    antlr4::tree::TerminalNode* VALUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CALLNAT();
    antlr4::tree::TerminalNode* CALLNAT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERFORM();
    antlr4::tree::TerminalNode* PERFORM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FIND();
    antlr4::tree::TerminalNode* FIND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STORE();
    antlr4::tree::TerminalNode* STORE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INPUT();
    antlr4::tree::TerminalNode* INPUT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REINPUT();
    antlr4::tree::TerminalNode* REINPUT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOEND();
    antlr4::tree::TerminalNode* DOEND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> END_IF();
    antlr4::tree::TerminalNode* END_IF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> END_FOR();
    antlr4::tree::TerminalNode* END_FOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOOP();
    antlr4::tree::TerminalNode* LOOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DO();
    antlr4::tree::TerminalNode* DO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESET();
    antlr4::tree::TerminalNode* RESET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REDEFINE();
    antlr4::tree::TerminalNode* REDEFINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GET();
    antlr4::tree::TerminalNode* GET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UPDATE();
    antlr4::tree::TerminalNode* UPDATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> READ();
    antlr4::tree::TerminalNode* READ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOVE();
    antlr4::tree::TerminalNode* MOVE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AT_START_OF_DATA();
    antlr4::tree::TerminalNode* AT_START_OF_DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FORMAT();
    antlr4::tree::TerminalNode* FORMAT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INCLUDE();
    antlr4::tree::TerminalNode* INCLUDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HISTOGRAM();
    antlr4::tree::TerminalNode* HISTOGRAM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> END_HISTOGRAM();
    antlr4::tree::TerminalNode* END_HISTOGRAM(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OtherStatementContext* otherStatement();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

