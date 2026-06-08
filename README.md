# C++ Algorithms and Systems Practice

A C++ practice repository focused on algorithms, data structures, object-oriented programming, file I/O, memory management, and systems fundamentals.

The goal of this project is to build a strong foundation in C++ for future work in robotics, autonomy, navigation, GNSS, and engineering software.

## Current Status

This repository currently contains **61 C++ source files** across the following completed modules:

| Folder             | Description                                                                                                        |
| ------------------ | ------------------------------------------------------------------------------------------------------------------ |
| `arrays/`          | Array basics, min/max search, averages, reversing, linear search, and even/odd counting                            |
| `functions/`       | Function basics, pass by value, and pass by reference                                                              |
| `strings/`         | String length, reversing, vowel counting, word counting, palindrome checks, character frequency, and space removal |
| `vectors/`         | Vector basics, sum/average, and maximum value search                                                               |
| `sorting/`         | Bubble sort, selection sort, insertion sort, merge sort, quick sort, descending sort, and vector sorting           |
| `searching/`       | Linear search, binary search, recursive binary search, first occurrence, and last occurrence                       |
| `recursion/`       | Factorial, Fibonacci, power, sum of digits, countdown, and recursive string reversal                               |
| `data_structures/` | Stacks, queues, linked lists, maps, sets, hash maps, and tree traversal basics                                     |
| `oop/`             | Classes, constructors, destructors, encapsulation, inheritance, polymorphism, and a robot class project            |
| `file_io/`         | Writing files, reading files, appending files, reading numeric data, and working with simple student records       |

## Topics Practiced

* Arrays, strings, and vectors
* Functions and references
* Searching and sorting algorithms
* Recursion
* Stacks and queues
* Linked lists
* Maps, sets, and hash maps
* Basic tree traversal
* Object-oriented programming
* Constructors and destructors
* Encapsulation, inheritance, and polymorphism
* File input/output
* Basic systems programming concepts

## Current Focus

The next module is `memory_pointers/`, which will focus on:

* Pointer syntax
* References vs pointers
* `int*` and `Node*`
* `&` and `*`
* `nullptr`
* Dynamic memory with `new` and `delete`
* Stack vs heap memory
* Destructor-based cleanup
* How linked lists connect nodes through pointers

## Planned Next Modules

```text
memory_pointers/
mini_projects/
```

Planned mini projects include:

* Gradebook manager
* Bank account manager
* Robot battery simulator
* Simple inventory system
* Autonomous robot grid

The autonomous robot grid project is intended to connect this C++ foundations repository to a future robotics simulation project.

## File I/O Notes

The `file_io/` examples generate local `.txt` and `.csv` files while running.

Generated file outputs are ignored by Git:

```gitignore
file_io/*.txt
file_io/*.csv
```

This keeps the repository focused on source code instead of generated output files.

## How to Run

Most files are standalone C++ examples and can be compiled individually with `g++`.

Example:

```bash
g++ arrays/array_basics.cpp -o array_basics
./array_basics
```

For another folder:

```bash
g++ oop/robot_class_project.cpp -o robot_class_project
./robot_class_project
```

When using VS Code Code Runner, programs may run from inside the folder of the current `.cpp` file. For file I/O examples, generated files may appear inside the `file_io/` folder.

## Tools Used

* C++
* VS Code
* g++
* Git
* GitHub
* GitHub Desktop

## Purpose

This repository is part of my independent software development portfolio. It shows steady practice with C++ fundamentals, algorithms, data structures, object-oriented programming, file I/O, and systems-oriented problem solving.

The long-term goal is to build toward more advanced robotics, autonomy, GNSS, and engineering software projects.
