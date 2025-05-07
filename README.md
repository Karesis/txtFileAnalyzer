# Text File Analyzer (Word Frequency Counter)

## Project Overview

This project is an assignment for an assembly language course. The primary goal is to develop a program that reads an English text file, tokenizes the content into words, counts the frequency of each word, and identifies the word (or words) that appear most frequently.

Input text files are expected to contain English words, separated by spaces and common punctuation marks.

## Project Approach

This project is being developed with a two-phase implementation strategy:

1.  **C Implementation (`CImpl/`)**:
    A version of the analyzer is first being implemented in the C programming language. This serves to:
    * Establish and test the core logic for text processing, tokenization, word counting, and frequency analysis.
    * Act as a working reference model before translation into assembly language.
    This C version is currently under development.

2.  **x86-64 Assembly Implementation (`AsmX86Impl/`)**:
    The core requirement of the assignment is to reimplement the analyzer in assembly language. The specific target for this implementation is:
    * **Architecture**: x86-64
    * **Operating System**: Linux
    * **Syntax**: AT&T
    * **Toolchain**: GAS (GNU Assembler)
    This phase will commence after the C implementation is substantially complete and validated.

## Directory Structure

```
.
├── AsmX86Impl/      # Contains the x86-64 Assembly language implementation.
│   └── README.md    # Details specific to building and running the Assembly version.
├── CImpl/           # Contains the C language implementation.
│   ├── README.md    # Details specific to building and running the C version.
│   ├── build/       # Output directory for compiled C code (as per .gitignore).
│   ├── data/        # Sample input text files (e.g., input.txt).
│   ├── src/         # C source code (tokenizer.c, analyzer.c, main.c).
│   └── makefile     # Makefile for compiling the C version.
├── LICENSE          # Project license information.
└── README.md        # This file: An overall introduction to the project.
```

## Core Task Requirements

The program, in both its C and assembly versions, should perform the following tasks:

1.  **Read Data**: Read text content from a specified input file.
2.  **Tokenize Words**: Process the text to isolate individual words, correctly handling spaces and punctuation marks as delimiters.
3.  **Count Word Frequencies**: Count the number of occurrences for each unique word found in the text.
4.  **Identify Most Frequent Word**: Determine and display the word (or words, in case of a tie) that occurs most frequently, along with its count.

## Navigating This Repository

* For information on the **C implementation** (including how to build and run it), please refer to the `CImpl/README.md` file.
* Details regarding the **x86-64 Assembly implementation** will be documented in the `AsmX86Impl/README.md` file as that part of the project progresses.

## License

Please refer to the `LICENSE` file for information on the licensing of this project.

---
Actually, these readme files are written by ai. Maybe them would change progressively as the project advances toward completion.
