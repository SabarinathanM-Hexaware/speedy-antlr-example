
// Generated from NaturalLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  NaturalLexer : public antlr4::Lexer {
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

  explicit NaturalLexer(antlr4::CharStream *input);

  ~NaturalLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

