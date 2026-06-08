# C++ Algorithms and Systems Practice

This repository contains my C++ practice work for algorithms, data structures, object-oriented programming, file I/O, memory/pointers, and systems fundamentals.

The goal of this repository is to build a strong foundation in modern C++, clean problem solving, and software fundamentals for technical engineering, navigation, robotics, autonomy, and systems-focused roles.

## Current Repository Structure

`arrays/` — array basics, min/max search, averages, reversing, linear search, and even/odd counting
`functions/` — function basics, pass by value, and pass by reference
`strings/` — string manipulation, manual string length, reversing, vowel counting, word counting, palindrome checks, character frequency, and space removal
`vectors/` — vector basics, sum/average, and maximum value search
`sorting/` — bubble sort, selection sort, insertion sort, merge sort, quick sort, descending sort, and vector sorting
`searching/` — linear search, binary search, recursive binary search, first occurrence, and last occurrence
`recursion/` — factorial, Fibonacci, power, sum of digits, countdown, and recursive string reversal
`data_structures/` — stacks, queues, linked lists, maps, sets, hash maps, and tree traversal basics
`oop/` — classes, constructors, destructors, getters/setters, access modifiers, const usage, inheritance, polymorphism, and a basic robot class project
`file_io/` — writing files, reading files, appending files, reading numeric data, and working with simple student record files

## Current Progress

The repository currently contains **61 C++ source files** across the completed folders.

Completed modules:

* Arrays
* Functions
* Strings
* Vectors
* Sorting
* Searching
* Recursion
* Data structures
* Object-oriented programming
* File input/output

Planned modules:

* Memory and pointers
* Mini projects

## Topics Covered

* Arrays and vectors
* Strings
* Functions
* Searching algorithms
* Sorting algorithms
* Recursion
* Stacks and queues
* Linked lists
* Maps and sets
* Hash maps
* Tree traversal
* Object-oriented programming
* Classes and objects
* Constructors and destructors
* Encapsulation
* Access modifiers
* Const correctness
* Inheritance
* Polymorphism
* File input/output
* Basic systems programming concepts

## Current Focus

The repository is currently focused on strengthening core C++ fundamentals through small, readable, standalone examples. Each folder is organized by topic so concepts can be practiced individually before being combined into larger projects.

Recent work has expanded the repository from basic syntax and algorithms into data structures, object-oriented programming, and file input/output.

The next focus is memory and pointer management, including pointer syntax, references, dynamic memory, `new`, `delete`, `nullptr`, simple node structures, and destructors.

## Planned Additions

* Pointer and memory management examples
* Mini projects combining multiple concepts
* A small autonomous robot grid project
* Build organization using Makefile or CMake
* Basic testing examples
* More systems-oriented C++ exercises

## Planned Memory and Pointer Examples

The planned `memory_pointers/` folder will include examples such as:

* `pointer_basics.cpp`
* `pointer_and_array.cpp`
* `references_vs_pointers.cpp`
* `dynamic_memory.cpp`
* `simple_node_pointer.cpp`
* `destructor_memory_cleanup.cpp`

This section will focus on:

* `int*`
* `Node*`
* `&`
* `*`
* `new`
* `delete`
* `nullptr`
* Stack vs heap memory
* Why destructors matter
* How linked lists connect nodes through pointers

## Planned Mini Projects

The planned `mini_projects/` folder will combine multiple C++ concepts into larger examples, including:

* `gradebook_manager.cpp`
* `bank_account_manager.cpp`
* `robot_battery_simulator.cpp`
* `simple_inventory_system.cpp`
* `autonomous_robot_grid.cpp`

The `autonomous_robot_grid.cpp` project is intended to act as a bridge toward a future robotics simulation repository.

## File I/O Notes

The `file_io/` examples use simple local filenames such as:

* `message.txt`
* `robot_log.txt`
* `system_log.txt`
* `sensor_readings.txt`
* `students.csv`

These generated `.txt` and `.csv` files are intentionally ignored by Git using `.gitignore`:

```gitignore
file_io/*.txt
file_io/*.csv
```

This keeps the repository focused on source code rather than generated output files.

## How to Run

Most files are standalone C++ examples and can be compiled individually with `g++`.

Example:

```bash
g++ arrays/array_basics.cpp -o array_basics
./array_basics
```

For files in other folders, replace the file path and output name as needed.

Example:

```bash
g++ oop/robot_class_project.cpp -o robot_class_project
./robot_class_project
```

When using VS Code Code Runner, programs may run from inside the folder of the current `.cpp` file. For file I/O examples, this means generated files may appear inside the `file_io/` folder.

## Tech Stack

* C++
* Git
* GitHub
* VS Code
* GitHub Desktop
* g++
* Command line tools

## Purpose

This repository is part of my independent software development portfolio. It is meant to show consistent progress, clean code, and strong fundamentals in C++ programming, algorithms, data structures, object-oriented programming, file I/O, and systems-oriented problem solving.

The long-term purpose is to build technical depth that supports future work in GNSS, geospatial data systems, navigation, robotics, autonomy, and engineering software workflows.
