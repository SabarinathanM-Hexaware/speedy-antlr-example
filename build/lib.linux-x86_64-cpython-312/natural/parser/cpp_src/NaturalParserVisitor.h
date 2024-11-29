
// Generated from NaturalParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "NaturalParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by NaturalParser.
 */
class  NaturalParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NaturalParser.
   */
    virtual std::any visitProgram(NaturalParser::ProgramContext *context) = 0;

    virtual std::any visitLineNumberStatement(NaturalParser::LineNumberStatementContext *context) = 0;

    virtual std::any visitStatement(NaturalParser::StatementContext *context) = 0;

    virtual std::any visitLabel(NaturalParser::LabelContext *context) = 0;

    virtual std::any visitDataDefinition(NaturalParser::DataDefinitionContext *context) = 0;

    virtual std::any visitCompressStatement(NaturalParser::CompressStatementContext *context) = 0;

    virtual std::any visitCompressEnd(NaturalParser::CompressEndContext *context) = 0;

    virtual std::any visitInputStatement(NaturalParser::InputStatementContext *context) = 0;

    virtual std::any visitInputOptions(NaturalParser::InputOptionsContext *context) = 0;

    virtual std::any visitInputUsingMap(NaturalParser::InputUsingMapContext *context) = 0;

    virtual std::any visitVariable(NaturalParser::VariableContext *context) = 0;

    virtual std::any visitReinputStatement(NaturalParser::ReinputStatementContext *context) = 0;

    virtual std::any visitReinputOptions(NaturalParser::ReinputOptionsContext *context) = 0;

    virtual std::any visitSortStatement(NaturalParser::SortStatementContext *context) = 0;

    virtual std::any visitExamineStatement(NaturalParser::ExamineStatementContext *context) = 0;

    virtual std::any visitExamineOptions(NaturalParser::ExamineOptionsContext *context) = 0;

    virtual std::any visitMoveStatement(NaturalParser::MoveStatementContext *context) = 0;

    virtual std::any visitMoveOptions(NaturalParser::MoveOptionsContext *context) = 0;

    virtual std::any visitRepeatStatement(NaturalParser::RepeatStatementContext *context) = 0;

    virtual std::any visitDoStatement(NaturalParser::DoStatementContext *context) = 0;

    virtual std::any visitStoreStatement(NaturalParser::StoreStatementContext *context) = 0;

    virtual std::any visitStoreCondition(NaturalParser::StoreConditionContext *context) = 0;

    virtual std::any visitFindStatement(NaturalParser::FindStatementContext *context) = 0;

    virtual std::any visitFindOptions(NaturalParser::FindOptionsContext *context) = 0;

    virtual std::any visitFindNumber(NaturalParser::FindNumberContext *context) = 0;

    virtual std::any visitReadStatement(NaturalParser::ReadStatementContext *context) = 0;

    virtual std::any visitUpdateStatement(NaturalParser::UpdateStatementContext *context) = 0;

    virtual std::any visitUpdateStartline(NaturalParser::UpdateStartlineContext *context) = 0;

    virtual std::any visitDeleteStatement(NaturalParser::DeleteStatementContext *context) = 0;

    virtual std::any visitGetStatements(NaturalParser::GetStatementsContext *context) = 0;

    virtual std::any visitGetTabledStatements(NaturalParser::GetTabledStatementsContext *context) = 0;

    virtual std::any visitGetTabledOptions(NaturalParser::GetTabledOptionsContext *context) = 0;

    virtual std::any visitGetTransactionStatement(NaturalParser::GetTransactionStatementContext *context) = 0;

    virtual std::any visitGetSameStatement(NaturalParser::GetSameStatementContext *context) = 0;

    virtual std::any visitHistogramStatement(NaturalParser::HistogramStatementContext *context) = 0;

    virtual std::any visitHistogramOptions(NaturalParser::HistogramOptionsContext *context) = 0;

    virtual std::any visitEndTransaction(NaturalParser::EndTransactionContext *context) = 0;

    virtual std::any visitBackoutTransaction(NaturalParser::BackoutTransactionContext *context) = 0;

    virtual std::any visitReadworkfileStatement(NaturalParser::ReadworkfileStatementContext *context) = 0;

    virtual std::any visitWorkfilenumberOption(NaturalParser::WorkfilenumberOptionContext *context) = 0;

    virtual std::any visitReadworkfileOptions(NaturalParser::ReadworkfileOptionsContext *context) = 0;

    virtual std::any visitAtEndOfFileStatement(NaturalParser::AtEndOfFileStatementContext *context) = 0;

    virtual std::any visitWriteworkfileStatement(NaturalParser::WriteworkfileStatementContext *context) = 0;

    virtual std::any visitCloseworkfileStatement(NaturalParser::CloseworkfileStatementContext *context) = 0;

    virtual std::any visitNoRecordsFoundStatement(NaturalParser::NoRecordsFoundStatementContext *context) = 0;

    virtual std::any visitAtStartOfDataStatement(NaturalParser::AtStartOfDataStatementContext *context) = 0;

    virtual std::any visitFormatStatement(NaturalParser::FormatStatementContext *context) = 0;

    virtual std::any visitFormatOptions(NaturalParser::FormatOptionsContext *context) = 0;

    virtual std::any visitAssignmentStatement(NaturalParser::AssignmentStatementContext *context) = 0;

    virtual std::any visitIncludeStatement(NaturalParser::IncludeStatementContext *context) = 0;

    virtual std::any visitRedefineStatement(NaturalParser::RedefineStatementContext *context) = 0;

    virtual std::any visitRedefineBody(NaturalParser::RedefineBodyContext *context) = 0;

    virtual std::any visitResetStatement(NaturalParser::ResetStatementContext *context) = 0;

    virtual std::any visitCallnatStatement(NaturalParser::CallnatStatementContext *context) = 0;

    virtual std::any visitSetkeyStatement(NaturalParser::SetkeyStatementContext *context) = 0;

    virtual std::any visitPerformStatement(NaturalParser::PerformStatementContext *context) = 0;

    virtual std::any visitSubroutineNames(NaturalParser::SubroutineNamesContext *context) = 0;

    virtual std::any visitFetchStatement(NaturalParser::FetchStatementContext *context) = 0;

    virtual std::any visitCallStatement(NaturalParser::CallStatementContext *context) = 0;

    virtual std::any visitForStatement(NaturalParser::ForStatementContext *context) = 0;

    virtual std::any visitAcceptRejectIfStatement(NaturalParser::AcceptRejectIfStatementContext *context) = 0;

    virtual std::any visitDecisionStatement(NaturalParser::DecisionStatementContext *context) = 0;

    virtual std::any visitIfStatement(NaturalParser::IfStatementContext *context) = 0;

    virtual std::any visitIfStructuredStatement(NaturalParser::IfStructuredStatementContext *context) = 0;

    virtual std::any visitElseStructured(NaturalParser::ElseStructuredContext *context) = 0;

    virtual std::any visitIfElseStatement(NaturalParser::IfElseStatementContext *context) = 0;

    virtual std::any visitIfMultilinedStatement(NaturalParser::IfMultilinedStatementContext *context) = 0;

    virtual std::any visitIfSinglelinedStatement(NaturalParser::IfSinglelinedStatementContext *context) = 0;

    virtual std::any visitElseMultilinedStatement(NaturalParser::ElseMultilinedStatementContext *context) = 0;

    virtual std::any visitElseSinglelinedStatement(NaturalParser::ElseSinglelinedStatementContext *context) = 0;

    virtual std::any visitOnelinerBody(NaturalParser::OnelinerBodyContext *context) = 0;

    virtual std::any visitCondition(NaturalParser::ConditionContext *context) = 0;

    virtual std::any visitOptionalCondition(NaturalParser::OptionalConditionContext *context) = 0;

    virtual std::any visitOperand(NaturalParser::OperandContext *context) = 0;

    virtual std::any visitNaturalKeywords(NaturalParser::NaturalKeywordsContext *context) = 0;

    virtual std::any visitLogicalOp(NaturalParser::LogicalOpContext *context) = 0;

    virtual std::any visitSubroutine(NaturalParser::SubroutineContext *context) = 0;

    virtual std::any visitBlockContentSubroutine(NaturalParser::BlockContentSubroutineContext *context) = 0;

    virtual std::any visitSubroutineStatement(NaturalParser::SubroutineStatementContext *context) = 0;

    virtual std::any visitFunctionDefinition(NaturalParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitBlockContent(NaturalParser::BlockContentContext *context) = 0;

    virtual std::any visitValueAssignment(NaturalParser::ValueAssignmentContext *context) = 0;

    virtual std::any visitAssignStatement(NaturalParser::AssignStatementContext *context) = 0;

    virtual std::any visitAddOperation(NaturalParser::AddOperationContext *context) = 0;

    virtual std::any visitMultiplyOperation(NaturalParser::MultiplyOperationContext *context) = 0;

    virtual std::any visitSubtractOperation(NaturalParser::SubtractOperationContext *context) = 0;

    virtual std::any visitDivideOperation(NaturalParser::DivideOperationContext *context) = 0;

    virtual std::any visitComputeOperation(NaturalParser::ComputeOperationContext *context) = 0;

    virtual std::any visitArithmaticOperation(NaturalParser::ArithmaticOperationContext *context) = 0;

    virtual std::any visitOptionalCompute(NaturalParser::OptionalComputeContext *context) = 0;

    virtual std::any visitCalculations(NaturalParser::CalculationsContext *context) = 0;

    virtual std::any visitAddContent(NaturalParser::AddContentContext *context) = 0;

    virtual std::any visitCompOp(NaturalParser::CompOpContext *context) = 0;

    virtual std::any visitArithmaticOp(NaturalParser::ArithmaticOpContext *context) = 0;

    virtual std::any visitEndStatement(NaturalParser::EndStatementContext *context) = 0;

    virtual std::any visitOtherStatement(NaturalParser::OtherStatementContext *context) = 0;


};

