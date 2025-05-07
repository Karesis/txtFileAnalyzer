# C Implementation of Text File Analyzer

## Overview

This directory (`CImpl/`) contains the C language implementation of the Text File Analyzer. The primary purpose of this version is to develop and verify the core logic for:

* Reading text content from files.
* Tokenizing the text into individual words (handling spaces and punctuation).
* Counting the frequency of each unique word.
* Identifying and reporting the most frequent word.

This C implementation serves as a functional prototype and a clear reference model before the logic is translated into x86-64 assembly language (as part of the overall project requirements detailed in the root `README.md`).

## Features

The C implementation is designed to (or will) provide the following functionalities:

* **File Input**: Reads text content from a user-specified input file.
* **Word Tokenization**: Parses the input text to extract individual words. It correctly identifies words based on English alphabet characters, using spaces and common punctuation marks as delimiters.
* **Word Frequency Counting**: Counts the occurrences of each unique word. *(Specify here if the counting is case-sensitive or case-insensitive, e.g., "Word counting is performed in a case-insensitive manner.")*
* **Most Frequent Word Identification**: Determines and outputs the word (or words, in case of a tie) that appears most frequently in the text, along with its count.

## Current Status

This C implementation is currently under development. The foundational components for tokenization (`tokenizer.c`) and analysis (`analyzer.c`) are being built, while `main.c` orchestrates the program's execution flow.

## Prerequisites

To build and run this C implementation, you will need:

* A C compiler (e.g., GCC, Clang)
* The `make` build utility

## Building the Project

1.  Ensure you are in the `CImpl/` directory of the project.
2.  Execute the `make` command from your terminal:
    ```bash
    make
    ```
3.  This command will invoke the C compiler (as specified in the `makefile`) to compile the source files located in the `src/` directory.
4.  The compiled executable (e.g., `analyzer`, `txt_analyzer`, or similar – please verify the name from your `makefile`) is expected to be placed in the `CImpl/build/` directory.

## Running the Analyzer

After successfully compiling the project, you can run the executable from within the `CImpl/` directory.

**Command Syntax:**

Assuming the executable is named `analyzer` and is located in the `build/` subdirectory:
```bash
./build/analyzer <path_to_input_file.txt>
```
If your `makefile` places the executable directly in `CImpl/`:
```bash
./analyzer <path_to_input_file.txt>
```

Replace `<path_to_input_file.txt>` with the actual path to the text file you wish to analyze.

**Example:**

To analyze the sample `input.txt` file provided in the `CImpl/data/` directory:
```bash
./build/analyzer data/input.txt
```

**Expected Output:**

The program should print the most frequent word found in the input file and its count. The exact format may vary, but an example could be:

```
The most frequent word is "the" with 27 occurrences.
```

*(Please adjust the example output to accurately reflect what your program produces or is intended to produce. Also, reiterate if the analysis is case-sensitive or case-insensitive here if it impacts user understanding of the output.)*

## Source Code Structure

* **`src/main.c`**: Contains the `main()` function, which serves as the entry point of the program. It is responsible for handling command-line arguments (i.e., the input file path), orchestrating the calls to tokenizer and analyzer functions, and presenting the final result.
* **`src/tokenizer.c`**: Implements the logic for reading the input file and breaking down its content into a stream or list of words (tokens). It handles various delimiters like spaces, tabs, newlines, and punctuation.
* **`src/analyzer.c`**: Contains the core logic for processing the tokens. This typically involves storing unique words and their counts (e.g., using a hash table, an array of structs, or other appropriate data structures) and then iterating through these counts to find the highest frequency.
* **`data/input.txt`**: A sample text file provided for testing the analyzer. You can replace or augment this with other test files.
* **`makefile`**: The build script that defines how to compile the source code files in `src/` and link them into the final executable.
* **`build/`**: This directory is intended for storing compiled object files and the final executable. It is typically excluded from version control (as specified in `.gitignore`).

