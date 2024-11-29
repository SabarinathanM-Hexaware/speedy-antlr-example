# Generated from NaturalParser.g4 by ANTLR 4.13.1
from antlr4 import *
if "." in __name__:
    from .NaturalParser import NaturalParser
else:
    from NaturalParser import NaturalParser

# This class defines a complete generic visitor for a parse tree produced by NaturalParser.

class NaturalParserVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by NaturalParser#program.
    def visitProgram(self, ctx:NaturalParser.ProgramContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#lineNumberStatement.
    def visitLineNumberStatement(self, ctx:NaturalParser.LineNumberStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#statement.
    def visitStatement(self, ctx:NaturalParser.StatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#label.
    def visitLabel(self, ctx:NaturalParser.LabelContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#dataDefinition.
    def visitDataDefinition(self, ctx:NaturalParser.DataDefinitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#compressStatement.
    def visitCompressStatement(self, ctx:NaturalParser.CompressStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#compressEnd.
    def visitCompressEnd(self, ctx:NaturalParser.CompressEndContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#inputStatement.
    def visitInputStatement(self, ctx:NaturalParser.InputStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#inputOptions.
    def visitInputOptions(self, ctx:NaturalParser.InputOptionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#inputUsingMap.
    def visitInputUsingMap(self, ctx:NaturalParser.InputUsingMapContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#variable.
    def visitVariable(self, ctx:NaturalParser.VariableContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#reinputStatement.
    def visitReinputStatement(self, ctx:NaturalParser.ReinputStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#reinputOptions.
    def visitReinputOptions(self, ctx:NaturalParser.ReinputOptionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#sortStatement.
    def visitSortStatement(self, ctx:NaturalParser.SortStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#examineStatement.
    def visitExamineStatement(self, ctx:NaturalParser.ExamineStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#examineOptions.
    def visitExamineOptions(self, ctx:NaturalParser.ExamineOptionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#moveStatement.
    def visitMoveStatement(self, ctx:NaturalParser.MoveStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#moveOptions.
    def visitMoveOptions(self, ctx:NaturalParser.MoveOptionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#repeatStatement.
    def visitRepeatStatement(self, ctx:NaturalParser.RepeatStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#doStatement.
    def visitDoStatement(self, ctx:NaturalParser.DoStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#storeStatement.
    def visitStoreStatement(self, ctx:NaturalParser.StoreStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#storePreview2.
    def visitStorePreview2(self, ctx:NaturalParser.StorePreview2Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#storeCondition.
    def visitStoreCondition(self, ctx:NaturalParser.StoreConditionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#findStatement.
    def visitFindStatement(self, ctx:NaturalParser.FindStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#findQuery.
    def visitFindQuery(self, ctx:NaturalParser.FindQueryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#findNumber.
    def visitFindNumber(self, ctx:NaturalParser.FindNumberContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#findPreview1.
    def visitFindPreview1(self, ctx:NaturalParser.FindPreview1Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#findPreview2.
    def visitFindPreview2(self, ctx:NaturalParser.FindPreview2Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#readStatement.
    def visitReadStatement(self, ctx:NaturalParser.ReadStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#readQuery.
    def visitReadQuery(self, ctx:NaturalParser.ReadQueryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#readPreview1.
    def visitReadPreview1(self, ctx:NaturalParser.ReadPreview1Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#readPreview2.
    def visitReadPreview2(self, ctx:NaturalParser.ReadPreview2Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#updateStatement.
    def visitUpdateStatement(self, ctx:NaturalParser.UpdateStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#updateStartline.
    def visitUpdateStartline(self, ctx:NaturalParser.UpdateStartlineContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#deleteStatement.
    def visitDeleteStatement(self, ctx:NaturalParser.DeleteStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#getStatements.
    def visitGetStatements(self, ctx:NaturalParser.GetStatementsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#getTabledStatements.
    def visitGetTabledStatements(self, ctx:NaturalParser.GetTabledStatementsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#getTabledOptions.
    def visitGetTabledOptions(self, ctx:NaturalParser.GetTabledOptionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#getTransactionStatement.
    def visitGetTransactionStatement(self, ctx:NaturalParser.GetTransactionStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#getSameStatement.
    def visitGetSameStatement(self, ctx:NaturalParser.GetSameStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#histogramStatement.
    def visitHistogramStatement(self, ctx:NaturalParser.HistogramStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#histogramQuery.
    def visitHistogramQuery(self, ctx:NaturalParser.HistogramQueryContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#histogramPreview.
    def visitHistogramPreview(self, ctx:NaturalParser.HistogramPreviewContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#histogramOptions.
    def visitHistogramOptions(self, ctx:NaturalParser.HistogramOptionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#endTransaction.
    def visitEndTransaction(self, ctx:NaturalParser.EndTransactionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#backoutTransaction.
    def visitBackoutTransaction(self, ctx:NaturalParser.BackoutTransactionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#readworkfileStatement.
    def visitReadworkfileStatement(self, ctx:NaturalParser.ReadworkfileStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#workfilenumberOption.
    def visitWorkfilenumberOption(self, ctx:NaturalParser.WorkfilenumberOptionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#readworkfileOptions.
    def visitReadworkfileOptions(self, ctx:NaturalParser.ReadworkfileOptionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#atEndOfFileStatement.
    def visitAtEndOfFileStatement(self, ctx:NaturalParser.AtEndOfFileStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#writeworkfileStatement.
    def visitWriteworkfileStatement(self, ctx:NaturalParser.WriteworkfileStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#closeworkfileStatement.
    def visitCloseworkfileStatement(self, ctx:NaturalParser.CloseworkfileStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#noRecordsFoundStatement.
    def visitNoRecordsFoundStatement(self, ctx:NaturalParser.NoRecordsFoundStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#atStartOfDataStatement.
    def visitAtStartOfDataStatement(self, ctx:NaturalParser.AtStartOfDataStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#formatStatement.
    def visitFormatStatement(self, ctx:NaturalParser.FormatStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#formatOptions.
    def visitFormatOptions(self, ctx:NaturalParser.FormatOptionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#assignmentStatement.
    def visitAssignmentStatement(self, ctx:NaturalParser.AssignmentStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#includeStatement.
    def visitIncludeStatement(self, ctx:NaturalParser.IncludeStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#redefineStatement.
    def visitRedefineStatement(self, ctx:NaturalParser.RedefineStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#redefineBody.
    def visitRedefineBody(self, ctx:NaturalParser.RedefineBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#resetStatement.
    def visitResetStatement(self, ctx:NaturalParser.ResetStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#callnatStatement.
    def visitCallnatStatement(self, ctx:NaturalParser.CallnatStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#setkeyStatement.
    def visitSetkeyStatement(self, ctx:NaturalParser.SetkeyStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#performStatement.
    def visitPerformStatement(self, ctx:NaturalParser.PerformStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#subroutineNames.
    def visitSubroutineNames(self, ctx:NaturalParser.SubroutineNamesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#fetchStatement.
    def visitFetchStatement(self, ctx:NaturalParser.FetchStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#callStatement.
    def visitCallStatement(self, ctx:NaturalParser.CallStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#forStatement.
    def visitForStatement(self, ctx:NaturalParser.ForStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#acceptRejectIfStatement.
    def visitAcceptRejectIfStatement(self, ctx:NaturalParser.AcceptRejectIfStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#decisionStatement.
    def visitDecisionStatement(self, ctx:NaturalParser.DecisionStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#ifStatement.
    def visitIfStatement(self, ctx:NaturalParser.IfStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#ifStructuredStatement.
    def visitIfStructuredStatement(self, ctx:NaturalParser.IfStructuredStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#elseStructured.
    def visitElseStructured(self, ctx:NaturalParser.ElseStructuredContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#ifElseStatement.
    def visitIfElseStatement(self, ctx:NaturalParser.IfElseStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#ifMultilinedStatement.
    def visitIfMultilinedStatement(self, ctx:NaturalParser.IfMultilinedStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#ifSinglelinedStatement.
    def visitIfSinglelinedStatement(self, ctx:NaturalParser.IfSinglelinedStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#elseMultilinedStatement.
    def visitElseMultilinedStatement(self, ctx:NaturalParser.ElseMultilinedStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#elseSinglelinedStatement.
    def visitElseSinglelinedStatement(self, ctx:NaturalParser.ElseSinglelinedStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#onelinerBody.
    def visitOnelinerBody(self, ctx:NaturalParser.OnelinerBodyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#condition.
    def visitCondition(self, ctx:NaturalParser.ConditionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#optionalCondition.
    def visitOptionalCondition(self, ctx:NaturalParser.OptionalConditionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#operand.
    def visitOperand(self, ctx:NaturalParser.OperandContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#naturalKeywords.
    def visitNaturalKeywords(self, ctx:NaturalParser.NaturalKeywordsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#logicalOp.
    def visitLogicalOp(self, ctx:NaturalParser.LogicalOpContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#subroutine.
    def visitSubroutine(self, ctx:NaturalParser.SubroutineContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#blockContentSubroutine.
    def visitBlockContentSubroutine(self, ctx:NaturalParser.BlockContentSubroutineContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#subroutineStatement.
    def visitSubroutineStatement(self, ctx:NaturalParser.SubroutineStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#functionDefinition.
    def visitFunctionDefinition(self, ctx:NaturalParser.FunctionDefinitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#blockContent.
    def visitBlockContent(self, ctx:NaturalParser.BlockContentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#valueAssignment.
    def visitValueAssignment(self, ctx:NaturalParser.ValueAssignmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#assignStatement.
    def visitAssignStatement(self, ctx:NaturalParser.AssignStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#addOperation.
    def visitAddOperation(self, ctx:NaturalParser.AddOperationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#multiplyOperation.
    def visitMultiplyOperation(self, ctx:NaturalParser.MultiplyOperationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#subtractOperation.
    def visitSubtractOperation(self, ctx:NaturalParser.SubtractOperationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#divideOperation.
    def visitDivideOperation(self, ctx:NaturalParser.DivideOperationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#computeOperation.
    def visitComputeOperation(self, ctx:NaturalParser.ComputeOperationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#arithmaticOperation.
    def visitArithmaticOperation(self, ctx:NaturalParser.ArithmaticOperationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#optionalCompute.
    def visitOptionalCompute(self, ctx:NaturalParser.OptionalComputeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#calculations.
    def visitCalculations(self, ctx:NaturalParser.CalculationsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#addContent.
    def visitAddContent(self, ctx:NaturalParser.AddContentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#compOp.
    def visitCompOp(self, ctx:NaturalParser.CompOpContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#arithmaticOp.
    def visitArithmaticOp(self, ctx:NaturalParser.ArithmaticOpContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#endStatement.
    def visitEndStatement(self, ctx:NaturalParser.EndStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NaturalParser#otherStatement.
    def visitOtherStatement(self, ctx:NaturalParser.OtherStatementContext):
        return self.visitChildren(ctx)



del NaturalParser