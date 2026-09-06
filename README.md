<div align="center">

  <!-- C Logo -->
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=c" alt="C Language Logo" width="80" height="80" />
  </a>

  <a href="https://git.io/typing-svg"><img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&pause=1000&center=true&width=435&lines=%EA%9C%B0%E1%B4%9C%C9%B4%E1%B4%85%E1%B4%80%E1%B4%8D%E1%B4%87%C9%B4%E1%B4%9B%E1%B4%80%CA%9F%EA%9C%B1+%E1%B4%8F%E1%9C%B0+%E1%B4%84+%E1%B4%98%CA%80%E1%B4%8F%C9%A2%CA%80%E1%B4%80%E1%B4%8D%E1%B4%8D%C9%AA%C9%B4%C9%A2" alt="Typing SVG" /></a>

  <p align="center">
    <strong>A collection of my C programming algorithms, logic building exercises, and academic codes for my B.Tech CSE (AI & DS).</strong>
  </p>

  <p align="center">
    <img src="https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="Language C" />
    <img src="https://img.shields.io/badge/Compiler-GCC-F34F29?style=for-the-badge&logo=gnu&logoColor=white" alt="GCC Compiler" />
    <img src="https://img.shields.io/badge/Status-Actively_Learning_%26_Committing-brightgreen?style=for-the-badge" alt="Status" />
  </p>

</div>

---

## 📌 OVERVIEW

This repository tracks my progress while learning the fundamentals of C programming. The examples focus on variables, input and output, arithmetic, conditionals, and basic problem-solving.

## 📂 SIMPLE ALGORITHMS

All examples are stored in the [`Simple Algorithms`](Simple%20Algorithms) directory. Each program is a standalone C file with its own `main` function.

| File | What it does | Main concepts |
| :--- | :--- | :--- |
| [`absolute.c`](Simple%20Algorithms/absolute.c) | Finds the absolute value of an integer. | `if-else`, unary negation |
| [`age_vote.c`](Simple%20Algorithms/age_vote.c) | Calculates age from a birth year and checks voting eligibility. | Input, arithmetic, conditionals |
| [`average.c`](Simple%20Algorithms/average.c) | Calculates the average of three integers. | Arithmetic operators, integer division |
| [`conditional_swap.c`](Simple%20Algorithms/conditional_swap.c) | Updates three values conditionally and prints their sum. | Nested conditionals, arithmetic |
| [`division.c`](Simple%20Algorithms/division.c) | Divides two user-provided numbers. | `float`, input, arithmetic |
| [`interest.c`](Simple%20Algorithms/interest.c) | Calculates simple interest. | Formula translation, `float` |
| [`leap_year.c`](Simple%20Algorithms/leap_year.c) | Checks whether a year is a leap year. | Logical operators, modulo operator |
| [`numcheck.c`](Simple%20Algorithms/numcheck.c) | Identifies whether a number is positive, negative, or zero. | `if-else if-else`, comparisons |
| [`scan_sub.c`](Simple%20Algorithms/scan_sub.c) | Subtracts one user-provided integer from another. | `scanf`, variables, arithmetic |
| [`sum.c`](Simple%20Algorithms/sum.c) | Adds two predefined integers. | Variables, assignment, `printf` |
| [`swap.c`](Simple%20Algorithms/swap.c) | Swaps two integers using a temporary variable. | Assignment, temporary storage |
| [`tax.c`](Simple%20Algorithms/tax.c) | Calculates tax and the final price of a product. | Percentages, `float`, arithmetic |
| [`time_convertor.c`](Simple%20Algorithms/time_convertor.c) | Converts days into hours, minutes, and seconds. | Unit conversion, arithmetic |

## ⚙️ HOW TO RUN

You need a C compiler such as [GCC](https://gcc.gnu.org/). On Windows, [MinGW-w64](https://www.mingw-w64.org/) is a common choice.

Clone the repository and open the examples directory:

```bash
git clone https://github.com/im-nitin/C.git
cd "C/Simple Algorithms"
```

Compile a program and run it. Replace `sum` with any filename from the table:

```bash
gcc sum.c -o sum
```

On Windows PowerShell:

```powershell
.\sum.exe
```

On Linux or macOS:

```bash
./sum
```

Most programs read values from standard input. Follow the prompts after starting the executable.

## 🧭 LEARNING FOCUS

- C syntax, variables, and data types
- Console input and output with `scanf` and `printf`
- Arithmetic and percentage calculations
- Conditional logic and comparison operators
- Translating everyday problems into small algorithms
