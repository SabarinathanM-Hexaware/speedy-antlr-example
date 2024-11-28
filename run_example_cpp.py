#!/usr/bin/env python3
import timeit
import antlr4
from natural.parser import sa_natural

# natural.print_tree("input_file.txt")
cpp_elapsed = timeit.timeit(lambda: sa_natural._cpp_parse(antlr4.FileStream("TAM599F"), "program"), number=1)
print(cpp_elapsed)
# natural.benchmark("TAM599F", 1)
