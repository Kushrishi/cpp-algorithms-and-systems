# C++ Algorithms and Systems Practice

A C++ practice repository focused on algorithms, data structures, object-oriented programming, file I/O, memory management, and systems fundamentals.

The goal of this project is to build a strong foundation in C++ for future work in robotics, autonomy, navigation, GNSS, and engineering software.

## Current Status

This repository currently contains **73 C++ source files** across the following completed modules:

| Folder             | Description                                                                                                        |
| ------------------ | ------------------------------------------------------------------------------------------------------------------ |
| `arrays/`          | Array basics, min/max search, averages, reversing, linear search, and even/odd counting                            |
| `functions/`       | Function basics, pass by value, and pass by reference                                                              |
| `strings/`         | String length, reversing, vowel counting, word counting, palindrome checks, character frequency, and space removal |
| `vectors/`         | Vector basics, sum/average, and maximum value search                                                               |
| `sorting/`         | Bubble sort, selection sort, insertion sort, merge sort, quick sort, descending sort, and vector sorting           |
| `searching/`       | Linear search, binary search, recursive binary search, first occurrence, and last occurrence                       |
| `recursion/`       | Factorial, Fibonacci, power, recursive array sum, recursive palindrome, and recursive string reversal              |
| `data_structures/` | Stacks, queues, linked lists, maps, sets, hash tables, priority queues, and tree traversal                         |
| `oop/`             | Classes, constructors, destructors, encapsulation, inheritance, polymorphism, and a robot class project            |
| `file_io/`         | Writing files, reading files, appending files, reading numeric data, and working with simple student records       |
| `memory_pointers/` | Pointer basics, references vs pointers, dynamic memory, node pointers, and destructor-based cleanup                |
| `mini_projects/`   | Small applied programs combining C++ fundamentals into complete examples                                           |

## Topics Practiced

* Arrays, strings, and vectors
* Functions and references
* Searching and sorting algorithms
* Recursion
* Stacks and queues
* Linked lists
* Maps, sets, hash tables, and priority queues
* Basic tree traversal
* Object-oriented programming
* Constructors and destructors
* Encapsulation, inheritance, and polymorphism
* File input/output
* Pointers and references
* Stack vs heap memory
* Dynamic memory with `new` and `delete`
* Node-based memory structures
* Menu-based program logic
* Basic simulation logic
* Systems-oriented problem solving

## Mini Projects

The `mini_projects/` folder includes small programs that combine multiple C++ concepts:

| Project                       | Concepts Practiced                                                                    |
| ----------------------------- | ------------------------------------------------------------------------------------- |
| `gradebook_manager.cpp`       | Vectors, functions, averages, min/max logic, and input validation                     |
| `bank_account_manager.cpp`    | Classes, constructors, encapsulation, validation, and menu logic                      |
| `robot_battery_simulator.cpp` | Classes, simulation logic, state tracking, and conditionals                           |
| `simple_inventory_system.cpp` | Structs, vectors, searching, updating records, and menu logic                         |
| `autonomous_robot_grid.cpp`   | 2D grids, robot movement, obstacles, target detection, and simple autonomous movement |

The autonomous robot grid project connects this C++ foundations repository to a future robotics simulation project.

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

For a mini project:

```bash
g++ mini_projects/autonomous_robot_grid.cpp -o autonomous_robot_grid
./autonomous_robot_grid
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

This repository is part of my independent software development portfolio. It shows steady practice with C++ fundamentals, algorithms, data structures, object-oriented programming, file I/O, memory management, and systems-oriented problem solving.

The long-term goal is to build toward more advanced robotics, autonomy, GNSS, and engineering software projects.

## Next Project

The next planned repository is `robotics-simulation-lab`, which will build on this foundation with more applied robotics and simulation work.
