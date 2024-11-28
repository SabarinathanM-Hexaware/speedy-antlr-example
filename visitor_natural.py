import logging.config
import os
from natural.parser.NaturalParserVisitor import NaturalParserVisitor
from natural.parser.NaturalParser import NaturalParser

# logger = logging.getLogger('parser')


class NaturalAdabasVisitor(NaturalParserVisitor):


    # def visitRedefineStatement(self, ctx: NaturalParser.RedefineStatementContext):
    #     # self.execution_order  =  self.execution_order +  1
    #     redefine_text = ctx.getText()
    #
    #     entityExtractor = EntityExtractor()
    #     entity = entityExtractor.extract_entity_into_xml(snippet=redefine_text)
    #
    #     # Extract variables and constants
    #     variables_details = self.cve.extract_constants_variables(entity.snippet, self.path)
    #
    #     entity = Entity(
    #         attributes=entity.attributes,
    #         snippet=entity.snippet,
    #         entity_name=entity.entity_name,
    #         program_id=self.file_name,
    #         parent_file_name=self.file_name,
    #         parent_file_path=self.path,
    #         definition_file_name=self.file_name,
    #         defenition_file_path=self.path,
    #         type="REDEFINE",
    #         variables=variables_details
    #     )
    #     self.entities.append(entity)
    #
    #     return self.visitChildren(ctx)


    # def hasUpdateStatement(self, ctx):
    #     # Traverse the children of the given context
    #     if hasattr(ctx, 'children') and ctx.children:
    #         for child in ctx.children:
    #             # Check if the child is an instance of StatementContext
    #             if isinstance(child, NaturalParser.StatementContext):
    #                 # Check if this StatementContext has an updateStatement child
    #                 if hasattr(child, 'children') and child.children:
    #                     for grandchild in child.children:
    #                         if isinstance(grandchild, NaturalParser.UpdateStatementContext):
    #                             return grandchild.start.line  # Return the line number

    #     return None

    # def visitResetStatement(self, ctx: NaturalParser.ResetStatementContext):
    #     # self.execution_order  =  self.execution_order +  1
    #
    #     reset_text = ctx.getText()
    #     entityExtractor = EntityExtractor()
    #     entity = entityExtractor.extract_entity_into_xml(snippet=reset_text)
    #
    #     # Extract variables and constants
    #     variables_details = self.cve.extract_constants_variables(entity.snippet, self.path)
    #
    #     entity = Entity(
    #         attributes=entity.attributes,
    #         snippet=entity.snippet,
    #         entity_name=entity.entity_name,
    #         program_id=self.file_name,
    #         parent_file_name=self.file_name,
    #         parent_file_path=self.path,
    #         definition_file_name=self.file_name,
    #         defenition_file_path=self.path,
    #         type="RESET",
    #         variables=variables_details
    #     )
    #     self.entities.append(entity)
    #     return self.visitChildren(ctx)

    def visitCallnatStatement(self, ctx: NaturalParser.CallnatStatementContext):
        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitPerformStatement(self, ctx: NaturalParser.PerformStatementContext):
        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitIfStatement(self, ctx: NaturalParser.IfStatementContext):

        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitDecisionStatement(self, ctx: NaturalParser.DecisionStatementContext):

        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitSubroutine(self, ctx: NaturalParser.SubroutineContext):

        print("inside visitor func msn")

        return self.visitChildren(ctx)

    # def visitDataDefinition(self, ctx: NaturalParser.DataDefinitionContext):
    #     # self.execution_order  =  self.execution_order +  1
    #
    #     entityExtractor = EntityExtractor()
    #     entity = entityExtractor.extract_entity_into_xml(snippet=ctx.getText())
    #     cleaned_text = ctx.getText()
    #     # Extract variables and constants
    #     variables_details = self.cve.extract_constants_variables(entity.snippet, self.path)
    #
    #     entity.program_id = self.file_name,
    #     entity.parent_file_name = self.file_name,
    #     entity.parent_file_path = self.path,
    #     entity.definition_file_name = self.file_name,
    #     entity.definition_file_path = self.path,
    #     entity.type = "DATA_DEFINITION",
    #     entity.variables = variables_details
    #
    #     if not entity.attributes:
    #         attributes = [Attribute(attribute_name=var.term, value="") for var in variables_details]
    #         entity.attributes = attributes
    #
    #     self.entities.append(entity)
    #
    #     return self.visitChildren(ctx)

    def visitFunctionDefinition(self, ctx: NaturalParser.FunctionDefinitionContext):

        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitFindStatement(self, ctx: NaturalParser.FindStatementContext):

        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitInputStatement(self, ctx: NaturalParser.InputStatementContext):
        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitStoreStatement(self, ctx: NaturalParser.StoreStatementContext):

        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitReadStatement(self, ctx: NaturalParser.ReadStatementContext):
        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitGetStatements(self, ctx: NaturalParser.GetStatementsContext):
        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitUpdateStatement(self, ctx: NaturalParser.UpdateStatementContext):
        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitDeleteStatement(self, ctx: NaturalParser.DeleteStatementContext):
        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitHistogramStatement(self, ctx: NaturalParser.HistogramStatementContext):
        print("inside visitor func msn")

        return self.visitChildren(ctx)

    def visitAddOperation(self, ctx: NaturalParser.AddOperationContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitMultiplyOperation(self, ctx: NaturalParser.MultiplyOperationContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitDivideOperation(self, ctx: NaturalParser.DivideOperationContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitSubtractOperation(self, ctx: NaturalParser.SubtractOperationContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitComputeOperation(self, ctx: NaturalParser.ComputeOperationContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitArithmaticOperation(self, ctx: NaturalParser.ArithmaticOperationContext):
        self.set_calculations(ctx, 'ARITHMATIC')
        return self.visitChildren(ctx)

    

    def visitCallStatement(self, ctx: NaturalParser.CallStatementContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitFetchStatement(self, ctx:NaturalParser.FetchStatementContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitEndTransaction(self, ctx: NaturalParser.EndTransactionContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitBackoutTransaction(self, ctx: NaturalParser.BackoutTransactionContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitReadworkfileStatement(self, ctx: NaturalParser.ReadworkfileStatementContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitWriteworkfileStatement(self, ctx: NaturalParser.WriteworkfileStatementContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)

    def visitCloseworkfileStatement(self, ctx: NaturalParser.CloseworkfileStatementContext):
        print("inside visitor func msn")
        return self.visitChildren(ctx)


# class NaturalMapVisitor:
#     def __init__(
#             self, project_metadata: CodeComprehensionMetadata, file_path: str
#     ):
#         self.project_metadata = project_metadata
#         self.file_path = file_path
#         self.file_name = os.path.basename(self.file_path)
#         self.input_interfaces = []

#     def create_input_interface(self, file_content: str):
#         input_interface = InputInterfaceSchema(
#             program_id=self.file_name,
#             project_id=self.project_metadata.project_id,
#             tech=self.project_metadata.technology,
#             file_path=self.file_path,
#             file_name=self.file_name,
#             class_name=self.file_name.split('.')[0],
#             start_line_number=0,
#             end_line_number=len(file_content.splitlines()),
#             execution_order=0,
#             snippet=file_content,
#             name=self.file_name,
#         )

#         self.input_interfaces.append(input_interface)
