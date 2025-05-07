# x86-64 Assembly Implementation of Text File Analyzer (AT&T Syntax)

## Overview

This directory (`AsmX86Impl/`) is designated for the x86-64 assembly language implementation of the Text File Analyzer. This version is the core deliverable for the assembly language course assignment and aims to replicate the functionality prototyped in the C version (located in the `../CImpl/` directory).

The program will be written for Linux, using AT&T syntax, and assembled with the GAS (GNU Assembler) toolchain. Its purpose is to read an English text file, tokenize its content into words, count the frequency of each word, and identify the most frequently occurring word.

## Target Specifications

* **Architecture:** x86-64
* **Operating System:** Linux
* **Assembly Syntax:** AT&T
* **Assembler:** GAS (GNU Assembler)
* **Linker:** LD (GNU Linker)
* **System Calls:** Direct Linux syscalls will likely be used for I/O and other OS interactions.

## Planned Functionality

The assembly program will be developed to perform the following tasks, mirroring the logic and features of the C implementation:

1.  **File Input**: Read text data from a user-specified input file using appropriate Linux system calls (e.g., `open`, `read`, `close`).
2.  **Word Tokenization**: Parse the input byte stream to identify and isolate individual words. This involves handling spaces, tabs, newlines, and common punctuation marks as delimiters.
3.  **Word Frequency Counting**: Implement data structures and algorithms in assembly to store unique words and their corresponding occurrence counts. *(Specify here if word counting will be case-sensitive or case-insensitive, ensuring consistency with the C version's behavior and project requirements.)*
4.  **Most Frequent Word Identification**: Process the stored frequency data to find the word (or words, in case of ties) with the highest count and prepare it for output.
5.  **Output**: Display the most frequent word(s) and their count(s) to standard output using Linux system calls (e.g., `write`).

## Current Status

This assembly language implementation is currently in the **planning and design phase**. Development will commence after the C version (`../CImpl/`) is substantially complete, tested, and validated, as it serves as a functional specification and reference.

This `README.md` will be updated with more specific details regarding design choices, file structure for the assembly code, and build/run instructions as the development progresses.

## Prerequisites for Building and Running

To assemble, link, and run this x86-64 assembly program, you will need:

* GNU Assembler (`as`)
* GNU Linker (`ld`)
* An x86-64 Linux environment for execution.
* (Optionally, if a `Makefile` is created for this part) The `make` utility.

## Building the Project (To Be Updated)

Detailed build instructions will be provided here once the assembly source code (`.s` files) is available. The general process will involve:

1.  **Assembling**: Converting the assembly source code file(s) into object file(s).
    ```bash
    # Example placeholder command (will be updated):
    # as --gstabs -o analyzer_asm.o analyzer.s
    ```
    *(The `--gstabs` option can be useful for debugging with GDB, if needed.)*

2.  **Linking**: Combining the object file(s) into a final executable file.
    ```bash
    # Example placeholder command (will be updated):
    # ld -o analyzer_asm analyzer_asm.o
    ```
    *(If any C library functions were to be used, linking against libc would be necessary, e.g., `-lc -dynamic-linker /lib64/ld-linux-x86-64.so.2`. However, for a pure assembly assignment focusing on syscalls, this might not be the case.)*

A `Makefile` might be provided in the future to automate these steps.

## Running the Analyzer (To Be Updated)

Execution instructions will be detailed here once the program can be successfully built. The anticipated command-line usage will be:

```bash
./analyzer_asm <path_to_input_file.txt>
```

Replace `<path_to_input_file.txt>` with the path to the text file you wish to analyze.

**Expected Output:**

The program's output should match the C version's goal, displaying the most frequent word and its count. For instance:

```
The most frequent word is "assembly" with 42 occurrences.
```

*(The exact output format should align with the project requirements and the behavior of the C reference implementation.)*

## Development Notes & Challenges (Optional)

This section can be used during development to note:

* Specific Linux system calls used and their calling conventions.
* Design of data structures (e.g., for hash tables, linked lists, or arrays to store words and counts) in assembly.
* Memory management strategies (e.g., using the stack, or `.bss` / `.data` sections; heap allocation via `brk`/`sbrk` syscalls is more advanced).
* String manipulation techniques in x86-64 assembly.
* Debugging approaches for assembly code (e.g., using GDB).
* Any particular challenges encountered or interesting solutions developed during the assembly implementation.

