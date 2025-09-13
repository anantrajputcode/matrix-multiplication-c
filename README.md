# Matrix Multiplication in C

[![Language](https://img.shields.io/badge/language-C-blue)](https://www.gnu.org/software/gcc/) [![License](https://img.shields.io/badge/license-MIT-green)](LICENSE)

*Author: Anant Rajput*

A simple C program that performs **matrix multiplication** with input validation and a user-friendly interface.

---

## Table of Contents

* [Features](#features)
* [How Matrix Multiplication Works](#how-matrix-multiplication-works)
* [Prerequisites](#prerequisites)
* [Compilation](#compilation)
* [Usage](#usage)
* [Example](#example)
* [Error Handling](#error-handling)
* [Code Structure](#code-structure)
* [Limitations](#limitations)
* [Possible Enhancements](#possible-enhancements)
* [Contributing](#contributing)
* [License](#license)

---

## Features

* **Dynamic Matrix Dimensions**: Accepts matrices of any valid size
* **Input Validation**: Ensures valid dimensions and multiplication compatibility
* **User-Friendly Interface**: Clear prompts and neatly formatted output
* **Memory Efficient**: Uses Variable Length Arrays (VLA) for dynamic memory allocation

---

## How Matrix Multiplication Works

For two matrices **A** and **B** (A × B):

* Number of columns in **A** must equal number of rows in **B**
* Resulting matrix **C** dimensions: rows of **A** × columns of **B**
* Each element:

```
C[i][j] = sum of (A[i][k] * B[k][j]) for all valid k
```

---

## Prerequisites

* **C Compiler**: GCC or any compiler supporting **C99** for VLAs
* Basic understanding of matrix operations

---

## Compilation

```bash
gcc matrix_multiplication.c -o matrix_multiplication
```

Or explicitly with C99:

```bash
gcc -std=c99 matrix_multiplication.c -o matrix_multiplication
```

---

## Usage

1. Run the compiled program:

```bash
./matrix_multiplication
```

2. Follow prompts to enter:

   * Dimensions of Matrix A and B
   * Elements of both matrices

3. The program outputs the **resulting matrix** or an **error message** if multiplication isn’t possible.

---

## Example

```
ENTER THE NUMBER OF ROWS OF MATRIX A: 2
ENTER THE NUMBER OF COLUMN OF MATRIX A: 3
ENTER THE NUMBER OF ROWS IN MATRIX B: 3
ENTER THE NUMBER OF COLUMN IN MATRIX B: 2

ENTER THE ELEMENTS OF MATRIX A:
1 2 3
4 5 6

ENTER THE ELEMENTS OF MATRIX B:
7 8
9 10
11 12

THE RESULT OF MULTIPLICATION OF MATRIX A AND MATRIX B IS:
58      64
139     154
```

---

## Error Handling

* **Zero Dimensions**: Prevents matrices with zero rows or columns
* **Invalid Multiplication**: Checks if columns of A = rows of B
* **Input Validation**: Unsigned integers for dimensions prevent negative values

---

## Code Structure

1. **Input Phase**: Collects and validates matrix dimensions
2. **Memory Allocation**: Uses VLAs to create matrices
3. **Data Entry**: User enters matrix elements
4. **Computation**: Performs multiplication using standard algorithm
5. **Output**: Displays result in formatted manner

---

## Limitations

* Maximum matrix size depends on stack memory (VLA limitation)
* Integer overflow possible with large numbers
* Only integer matrices supported (no floats)

---

## Possible Enhancements

* Support for **floating-point matrices**
* **File I/O** for large matrices
* Additional **matrix operations** (addition, transpose, etc.)
* **Optimization** for very large matrices

---

## Contributing

Feel free to **fork this repository** and submit pull requests for improvements or bug fixes.

---

## License

This project is open-source under the [MIT License](LICENSE).

