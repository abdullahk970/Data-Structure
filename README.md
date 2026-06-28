# 🧠 Data Structures in C (Beginner Practice Collection)

> A collection of basic **C programming examples focused on Data Structures fundamentals**, including arrays, input handling, and function-based data processing.

This project is designed for beginners to understand:

* Arrays
* Input/Output handling
* Function usage
* Basic iteration logic
* Data traversal techniques

---

# 🚀 Overview

This repository contains simple C programs demonstrating foundational **Data Structures concepts**, especially focusing on:

* Character input processing
* Array initialization
* Array traversal using functions
* Basic modular programming in C

These examples are ideal for students starting **DSA (Data Structures & Algorithms)**.

---

# ✨ Concepts Covered

## 📥 1. Input Stream Handling (Character Processing)

### Code Purpose:

Reads characters from standard input until Enter is pressed and prints them immediately.

### Key Concept:

* Uses `getchar()`
* Works on **stdin stream**
* Input is **line buffered**

### Logic Flow:

```text id="char-flow"
User Input → getchar() → Character Read → Print → Repeat until '\n'
```

### Key Learning:

* Understanding input buffers
* Real-time character processing
* Basic stream handling in C

---

## 📊 2. Array Initialization & Storage

### Code Purpose:

Stores numbers 0–39 in an integer array.

### Key Concept:

* Static array allocation
* Index-based storage
* Loop-based initialization

### Logic:

```text id="array-init"
for i = 0 to 39:
    num[i] = i
```

### Key Learning:

* How arrays store sequential data
* Indexing starts from 0
* Loop-based data filling

---

## 📚 3. Array Traversal Using Function

### Code Purpose:

Prints array elements using a separate function.

### Key Concept:

* Function-based modular programming
* Passing array elements to functions
* Iterating through arrays

---

### ⚠️ Important Note:

Function `display()` is used without prototype (older C style).

---

### Flow:

```text id="array-traversal"
Array → Loop → Function Call → Print Value
```

---

### Function Role:

```c
display(int m)
```

* Takes one element at a time
* Prints it using `printf`

---

### Key Learning:

* Function decomposition
* Code reusability
* Array traversal logic

---

# 🏗️ Tech Stack

* C Language
* Standard Input/Output (`stdio.h`)
* Console-based execution

---

# 📂 Code Breakdown

## 🧾 Program 1: Character Input Reader

### Features:

* Reads input until newline
* Prints characters immediately

### Important Function:

```c
getchar()
```

---

## 📊 Program 2: Array Initialization

### Features:

* Stores sequential values in array
* Demonstrates indexing logic

---

## 📚 Program 3: Array + Function

### Features:

* Uses function to display elements
* Demonstrates modular programming

---

# 📈 Key Data Structure Concepts

### 🔹 Arrays

* Linear data structure
* Fixed size memory allocation
* Indexed access

### 🔹 Iteration

* `for` loop traversal
* Element-wise processing

### 🔹 Functions

* Code modularization
* Reusability of logic

### 🔹 Input Stream

* Character-by-character input
* Buffer-based processing

---

# ⚠️ Improvements Needed (Important)

### 1. Add function prototype

```c
void display(int m);
```

### 2. Avoid `conio.h`

* Not standard in modern C
* Replace with standard libraries

### 3. Use proper function declaration

* Define `display()` before `main()`

---

# 🔮 Suggested Enhancements

* 📌 Implement Stack using arrays
* 📌 Implement Queue (basic version)
* 📌 Linked List introduction
* 📌 Searching algorithms (Linear Search)
* 📌 Sorting algorithms (Bubble Sort)
* 📌 Dynamic memory allocation (`malloc`)

---

# 📚 Learning Outcome

After studying these programs, you will understand:

* How arrays work in memory
* How to traverse data structures
* How functions improve code structure
* How input/output streams behave in C
* Basics of procedural programming

---

# 👨‍💻 Author

**Muhammad Abdullah Khan**

## ⭐ Support

If this project helped you learn Data Structures, consider giving it a ⭐ on GitHub.
