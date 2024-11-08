# Class Grade Computing System

---

## Overview

This project implements a **Class Grade Computing System** for managing and processing student records using a **singly linked list**. The system includes features for dynamically managing student data, calculating grades, and saving the results to a file. It demonstrates advanced C programming concepts such as **structures and structure pointers**, **linked lists**, **function pointers**, and **command-line argument handling**.

---

## Features

1. **Student Data Management**:
   - Dynamically stores and processes student records.
   - Supports adding and deleting students.

2. **Grade Calculation**:
   - Computes cumulative scores and overall grades for multiple categories.
   - Includes functionality for recalculating grades dynamically.

3. **Data Output**:
   - Displays student records sorted by ID or last name.
   - Supports saving updated student data to a file.

4. **Command-Line Integration**:
   - Reads initial data from a file (specified as `filename1`).
   - Writes updated data to another file (specified as `filename2`).

5. **Function Pointers**:
   - Implements user menu options using an array of function pointers for modular design and efficient execution.

6. **Memory Management**:
   - Dynamically allocates and deallocates memory for student records.
   - Ensures no memory leaks using tools like **valgrind**.

---

## Usage

### Compilation

Use the provided `Makefile` to compile and package the program:
- **Compile the program**:
  ```bash
  make lab4
