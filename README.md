## Enhanced Calculator (C++)
## Overview

This project is an enhanced version of a basic C++ calculator.
The original implementation had limitations such as lack of proper error handling, tight coupling of logic, and minimal functionality.

The calculator has been refactored and enhanced to improve:

Code readability

Maintainability

Robustness

Feature set

This project demonstrates bug fixing, refactoring, and feature enhancement on an existing codebase.

## Original Issues Identified

The initial calculator code had the following problems:

- No handling of division by zero

- Incorrect evaluation for operator precedence

- No input validation

- All logic placed in a single flow, making extension difficult

## Enhancements & Fixes Implemented
## Bug Fixes

Safe handling of division by zero

Validation for invalid characters in expressions

## Refactoring

Separated computation logic into reusable functions

Improved modularity and readability

Reduced tight coupling between logic and input handling

## Feature Enhancements

Expression validation

Operator count analysis

Operand extraction from expressions

Maximum and minimum operand detection

Expression summary reporting

These enhancements were added without altering the core evaluation logic, ensuring backward compatibility.

Supports arithmetic operations: +, -, *, /

Validates input expressions

Safely evaluates expressions

Modular and extensible design

## Project Structure
calc/
│
├── main.cpp        # Enhanced calculator implementation
└── README.md       # Project documentation

## How to Run
Compile
g++ main.cpp -o calc

Execute
./calc

## Sample Input
10 + 5 * 2

Output
Result: 20