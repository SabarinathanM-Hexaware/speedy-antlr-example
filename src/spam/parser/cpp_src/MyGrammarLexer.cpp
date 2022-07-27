
// Generated from MyGrammar.g4 by ANTLR 4.10.1


#include "MyGrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MyGrammarLexerStaticData final {
  MyGrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyGrammarLexerStaticData(const MyGrammarLexerStaticData&) = delete;
  MyGrammarLexerStaticData(MyGrammarLexerStaticData&&) = delete;
  MyGrammarLexerStaticData& operator=(const MyGrammarLexerStaticData&) = delete;
  MyGrammarLexerStaticData& operator=(MyGrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag mygrammarlexerLexerOnceFlag;
MyGrammarLexerStaticData *mygrammarlexerLexerStaticData = nullptr;

void mygrammarlexerLexerInitialize() {
  assert(mygrammarlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<MyGrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "SL_COMMENT", "ML_COMMENT", "INT", "ESC", 
      "STRING", "PLUS", "MINUS", "MULT", "EXP", "DIV", "MOD", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "';'", "'\\u003F'", "':'", "", "", "", "", "'+'", "'-'", "'*'", 
      "'**'", "'/'", "'%'"
    },
    std::vector<std::string>{
      "", "", "", "", "SL_COMMENT", "ML_COMMENT", "INT", "STRING", "PLUS", 
      "MINUS", "MULT", "EXP", "DIV", "MOD", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,14,109,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,5,3,42,8,3,10,3,12,3,45,
  	9,3,1,3,3,3,48,8,3,1,3,3,3,51,8,3,1,3,1,3,1,4,1,4,1,4,1,4,5,4,59,8,4,
  	10,4,12,4,62,9,4,1,4,1,4,1,4,1,4,1,4,1,5,4,5,70,8,5,11,5,12,5,71,1,6,
  	1,6,1,6,1,6,3,6,78,8,6,1,7,1,7,1,7,5,7,83,8,7,10,7,12,7,86,9,7,1,7,1,
  	7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,14,4,
  	14,104,8,14,11,14,12,14,105,1,14,1,14,1,60,0,15,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,0,15,7,17,8,19,9,21,10,23,11,25,12,27,13,29,14,1,0,5,2,0,10,10,13,
  	13,1,1,10,10,1,0,48,57,2,0,34,34,92,92,3,0,9,10,13,13,32,32,115,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,
  	0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,1,31,1,0,0,0,3,33,1,0,0,0,5,35,1,0,0,
  	0,7,37,1,0,0,0,9,54,1,0,0,0,11,69,1,0,0,0,13,77,1,0,0,0,15,79,1,0,0,0,
  	17,89,1,0,0,0,19,91,1,0,0,0,21,93,1,0,0,0,23,95,1,0,0,0,25,98,1,0,0,0,
  	27,100,1,0,0,0,29,103,1,0,0,0,31,32,5,59,0,0,32,2,1,0,0,0,33,34,5,63,
  	0,0,34,4,1,0,0,0,35,36,5,58,0,0,36,6,1,0,0,0,37,38,5,47,0,0,38,39,5,47,
  	0,0,39,43,1,0,0,0,40,42,8,0,0,0,41,40,1,0,0,0,42,45,1,0,0,0,43,41,1,0,
  	0,0,43,44,1,0,0,0,44,47,1,0,0,0,45,43,1,0,0,0,46,48,5,13,0,0,47,46,1,
  	0,0,0,47,48,1,0,0,0,48,50,1,0,0,0,49,51,7,1,0,0,50,49,1,0,0,0,51,52,1,
  	0,0,0,52,53,6,3,0,0,53,8,1,0,0,0,54,55,5,47,0,0,55,56,5,42,0,0,56,60,
  	1,0,0,0,57,59,9,0,0,0,58,57,1,0,0,0,59,62,1,0,0,0,60,61,1,0,0,0,60,58,
  	1,0,0,0,61,63,1,0,0,0,62,60,1,0,0,0,63,64,5,42,0,0,64,65,5,47,0,0,65,
  	66,1,0,0,0,66,67,6,4,0,0,67,10,1,0,0,0,68,70,7,2,0,0,69,68,1,0,0,0,70,
  	71,1,0,0,0,71,69,1,0,0,0,71,72,1,0,0,0,72,12,1,0,0,0,73,74,5,92,0,0,74,
  	78,5,34,0,0,75,76,5,92,0,0,76,78,5,92,0,0,77,73,1,0,0,0,77,75,1,0,0,0,
  	78,14,1,0,0,0,79,84,5,34,0,0,80,83,3,13,6,0,81,83,8,3,0,0,82,80,1,0,0,
  	0,82,81,1,0,0,0,83,86,1,0,0,0,84,82,1,0,0,0,84,85,1,0,0,0,85,87,1,0,0,
  	0,86,84,1,0,0,0,87,88,5,34,0,0,88,16,1,0,0,0,89,90,5,43,0,0,90,18,1,0,
  	0,0,91,92,5,45,0,0,92,20,1,0,0,0,93,94,5,42,0,0,94,22,1,0,0,0,95,96,5,
  	42,0,0,96,97,5,42,0,0,97,24,1,0,0,0,98,99,5,47,0,0,99,26,1,0,0,0,100,
  	101,5,37,0,0,101,28,1,0,0,0,102,104,7,4,0,0,103,102,1,0,0,0,104,105,1,
  	0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,107,1,0,0,0,107,108,6,14,0,
  	0,108,30,1,0,0,0,10,0,43,47,50,60,71,77,82,84,105,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarlexerLexerStaticData = staticData.release();
}

}

MyGrammarLexer::MyGrammarLexer(CharStream *input) : Lexer(input) {
  MyGrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mygrammarlexerLexerStaticData->atn, mygrammarlexerLexerStaticData->decisionToDFA, mygrammarlexerLexerStaticData->sharedContextCache);
}

MyGrammarLexer::~MyGrammarLexer() {
  delete _interpreter;
}

std::string MyGrammarLexer::getGrammarFileName() const {
  return "MyGrammar.g4";
}

const std::vector<std::string>& MyGrammarLexer::getRuleNames() const {
  return mygrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MyGrammarLexer::getChannelNames() const {
  return mygrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MyGrammarLexer::getModeNames() const {
  return mygrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MyGrammarLexer::getVocabulary() const {
  return mygrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MyGrammarLexer::getSerializedATN() const {
  return mygrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& MyGrammarLexer::getATN() const {
  return *mygrammarlexerLexerStaticData->atn;
}




void MyGrammarLexer::initialize() {
  std::call_once(mygrammarlexerLexerOnceFlag, mygrammarlexerLexerInitialize);
}
