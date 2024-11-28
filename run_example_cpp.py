#!/usr/bin/env python3
import timeit
import antlr4
from natural.parser import sa_natural
from visitor_natural import NaturalAdabasVisitor

# natural.print_tree("input_file.txt")
# cpp_elapsed = timeit.timeit(lambda: sa_natural._cpp_parse(antlr4.FileStream("TAM599F"), "program"), number=1)

tree = sa_natural._cpp_parse(antlr4.FileStream("TAM599F"), "program")
visitor = NaturalAdabasVisitor()
visitor_time = timeit.timeit(lambda: visitor.visit(tree), number=1)
print(visitor_time)
print("success")

# print(cpp_elapsed)
# natural.benchmark("TAM599F", 1)
