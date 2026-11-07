# 🧮 C++ Scientific Calculator

A simple console-based scientific calculator written in **C++17** and built using **CMake**.

This project was created to practice C++ programming, working with functions, organizing code into multiple files, and using Git and GitHub.

## ✨ Features

The calculator supports 16 mathematical operations:

**Basic Operations**

- Addition
- Subtraction
- Multiplication
- Division

**Advanced Operations**

- Exponentiation
- Nth root
- Logarithms with a custom base
- Natural logarithm

**Trigonometric Functions**

- Sine, cosine, tangent, and cotangent
- Arcsine, arccosine, arctangent, and arccotangent

All trigonometric functions use **radians**.

The calculator also includes basic error handling for invalid mathematical operations, such as division by zero.

## 🛠️ Technologies

- **Language:** C++17
- **Build system:** CMake
- **Compiler:** GCC (MinGW-w64)
- **Development environment:** Visual Studio Code

## 📁 Project Structure

```text
Calculator/
├── include/
│   └── calculator.hpp
├── src/
│   ├── calculator.cpp
│   └── main.cpp
├── CMakeLists.txt
├── .gitignore
└── README.md
```

## 🚀 Build and Run

Make sure you have a C++ compiler and CMake installed.

**1. Clone the repository**

```bash
git clone https://github.com/silly17yo/Calculator.git
cd Calculator
```

**2. Configure and build the project**

```bash
cmake -S . -B build
cmake --build build
```

**3. Run the calculator**

On Windows with the MinGW/GCC toolchain:

```bash
./build/Calculator.exe
```

## 🎯 Project Goals

This is one of my first C++ projects. Its main goals are to:

- Improve my understanding of C++ syntax and functions.
- Practice modular programming with header and source files.
- Learn how to build projects using CMake.
- Gain experience with Git and GitHub.
- Develop practical programming skills through small projects.

## 📌 Project Status

**Version 1.0** — Initial working version.

Future improvements may include better input validation and additional mathematical functions.
