# Compiler Constructions Programs

This repository contains the Compiler Construction programs extracted from the supplied course material.

## Programs

1. Fibonacci Series
2. Macro Assembly Language
3. Macro Expansion using Recursion
4. Lexical Analysis
5. Parse Tree of Arithmetic Expression
6. Source Code Optimization
7. MiniLang Lexer and Syntax Checker
8. Lexical Analyzer using LEX/Flex

## Compile C programs

Using GCC:

```bash
gcc 01-fibonacci-series/fibonacci_series.c -o fibonacci
./fibonacci
```

For any other `.c` file:

```bash
gcc path/to/program.c -o program
./program
```

## Compile the Flex program

Install Flex and GCC, then:

```bash
cd 08-lexical-analyzer-flex
flex lexer.l
gcc lex.yy.c -o lexer
./lexer
```

On Windows, commands may vary depending on whether you use MinGW, WSL, or another GCC/Flex environment.

## GitHub upload

You can upload the complete folder directly through GitHub's web interface, or use Git:

```bash
git init
git add .
git commit -m "Add Compiler Construction programs"
git branch -M main
git remote add origin YOUR_GITHUB_REPOSITORY_URL
git push -u origin main
```
