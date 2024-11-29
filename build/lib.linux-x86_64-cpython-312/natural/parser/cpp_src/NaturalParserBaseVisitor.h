
// Generated from NaturalParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "NaturalParserVisitor.h"


/**
 * This class provides an empty implementation of NaturalParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NaturalParserBaseVisitor : public NaturalParserVisitor {
public:

  virtual std::any visitProgram(NaturalParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLineNumberStatement(NaturalParser::LineNumberStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(NaturalParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(NaturalParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataDefinition(NaturalParser::DataDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompressStatement(NaturalParser::CompressStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompressEnd(NaturalParser::CompressEndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInputStatement(NaturalParser::InputStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInputOptions(NaturalParser::InputOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInputUsingMap(NaturalParser::InputUsingMapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(NaturalParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReinputStatement(NaturalParser::ReinputStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReinputOptions(NaturalParser::ReinputOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSortStatement(NaturalParser::SortStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExamineStatement(NaturalParser::ExamineStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExamineOptions(NaturalParser::ExamineOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMoveStatement(NaturalParser::MoveStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMoveOptions(NaturalParser::MoveOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeatStatement(NaturalParser::RepeatStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoStatement(NaturalParser::DoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStoreStatement(NaturalParser::StoreStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStoreCondition(NaturalParser::StoreConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFindStatement(NaturalParser::FindStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFindOptions(NaturalParser::FindOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFindNumber(NaturalParser::FindNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadStatement(NaturalParser::ReadStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdateStatement(NaturalParser::UpdateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdateStartline(NaturalParser::UpdateStartlineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeleteStatement(NaturalParser::DeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetStatements(NaturalParser::GetStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetTabledStatements(NaturalParser::GetTabledStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetTabledOptions(NaturalParser::GetTabledOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetTransactionStatement(NaturalParser::GetTransactionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetSameStatement(NaturalParser::GetSameStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHistogramStatement(NaturalParser::HistogramStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHistogramOptions(NaturalParser::HistogramOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndTransaction(NaturalParser::EndTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackoutTransaction(NaturalParser::BackoutTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadworkfileStatement(NaturalParser::ReadworkfileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWorkfilenumberOption(NaturalParser::WorkfilenumberOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadworkfileOptions(NaturalParser::ReadworkfileOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtEndOfFileStatement(NaturalParser::AtEndOfFileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteworkfileStatement(NaturalParser::WriteworkfileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCloseworkfileStatement(NaturalParser::CloseworkfileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoRecordsFoundStatement(NaturalParser::NoRecordsFoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtStartOfDataStatement(NaturalParser::AtStartOfDataStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormatStatement(NaturalParser::FormatStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormatOptions(NaturalParser::FormatOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStatement(NaturalParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncludeStatement(NaturalParser::IncludeStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRedefineStatement(NaturalParser::RedefineStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRedefineBody(NaturalParser::RedefineBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResetStatement(NaturalParser::ResetStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallnatStatement(NaturalParser::CallnatStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetkeyStatement(NaturalParser::SetkeyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPerformStatement(NaturalParser::PerformStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineNames(NaturalParser::SubroutineNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFetchStatement(NaturalParser::FetchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallStatement(NaturalParser::CallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(NaturalParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAcceptRejectIfStatement(NaturalParser::AcceptRejectIfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecisionStatement(NaturalParser::DecisionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(NaturalParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStructuredStatement(NaturalParser::IfStructuredStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStructured(NaturalParser::ElseStructuredContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfElseStatement(NaturalParser::IfElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfMultilinedStatement(NaturalParser::IfMultilinedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfSinglelinedStatement(NaturalParser::IfSinglelinedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseMultilinedStatement(NaturalParser::ElseMultilinedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseSinglelinedStatement(NaturalParser::ElseSinglelinedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnelinerBody(NaturalParser::OnelinerBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(NaturalParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalCondition(NaturalParser::OptionalConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperand(NaturalParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNaturalKeywords(NaturalParser::NaturalKeywordsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOp(NaturalParser::LogicalOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutine(NaturalParser::SubroutineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockContentSubroutine(NaturalParser::BlockContentSubroutineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineStatement(NaturalParser::SubroutineStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(NaturalParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockContent(NaturalParser::BlockContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueAssignment(NaturalParser::ValueAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignStatement(NaturalParser::AssignStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddOperation(NaturalParser::AddOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplyOperation(NaturalParser::MultiplyOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubtractOperation(NaturalParser::SubtractOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivideOperation(NaturalParser::DivideOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComputeOperation(NaturalParser::ComputeOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmaticOperation(NaturalParser::ArithmaticOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalCompute(NaturalParser::OptionalComputeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCalculations(NaturalParser::CalculationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddContent(NaturalParser::AddContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompOp(NaturalParser::CompOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmaticOp(NaturalParser::ArithmaticOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndStatement(NaturalParser::EndStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOtherStatement(NaturalParser::OtherStatementContext *ctx) override {
    return visitChildren(ctx);
  }


};

