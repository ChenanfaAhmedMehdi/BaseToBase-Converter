# Binary ↔ Decimal Converter in C

## Overview

This project implements a simple binary-to-decimal and decimal-to-binary
converter written in C. My goal here was to combine my Theoretical & 
Practical knowledge to make a program, and with the mix of the base
concepts I learned on my Machine Structure's course, and the C 
Fundamentals that I picked up on my Algorithm's practical works,
I made this tool.

---

## Why C?

This project was implemented in C because it is the only language used
in my Computer Science 1st year curriculum, in my practical works like
I said. In addition to that, C is the only programing language that 
I have decent mastery of, and I want to further master it.

---

## Features

- Handles binary input digit by digit.
- Converts binary numbers (up to 10 bits) to decimal.
- Converts decimal numbers (up to the number 1023) to binary.
- Input validation for invalid characters.
- No use of built-in base conversion functions (I didn't know there is such thing before writing this).

---

## How It Works

The range of numbers that can be converted is based on
the size of the array, or what I like to call the bits of
the array, there are two cases to the conversion:

### Binary to Decimal
- Reads each digit of the number as a character and discards
  letters, symbols and digits that are not ones and zeroes 
  (if inputed by the user).
- Turns the readed digits from characters to values then 
  stores these values in an array. 
- Using basic math and the pow() built-in function 
  the number's base gets converted to decimal.
- Prints.

### Decimal to Binary
- Reads each digit of the number as a values and 
  discards letters and symbols (if inputed by the user)
  and stores them in an integer variable.
- Does successive division by 2 starting with the stored number
 ending with 1.
- Stores remainders in an array and prints them in reverse order.

---

"you can find a more detailed explaination on the comments I will put on the code!!"

---

## Example Usage

### Binary to Decimal

Please choose your case (1 or 2)
1- binary to decimal.
2- decimal to binary.
1
enter your number: 10

Output:
2

### Decimal to Binary

Please choose your case (1 or 2)
1- binary to decimal.
2- decimal to binary.
2
enter your number: 2

Output:
10

---

## What I Learned

- Converting characters to numeric values using ASCII
- Validating user input in C via: 
  - Manual character-level parsing of a numeric representation.
  - Flushing unnecessary and unwanted data.

---

## Improvements

- Increase the array size from 10 to 15, then add 
  support for signed numbers, so the converter covers 
  the range of numbers that an integer variable can 
  hold, which is [-32,767 ; +32,767].
- polish the code: 'Better organized' 'More unnderstandable'.
- Use of bitwise operations instead of `pow`, because
  apparently it's better used with bigger data, like floats 
  and doubles.
- Modularizing the code into functions

---

## Compilation & Execution

- To compile, just run this shell command:

``bash
gcc main.c -o main -lm

- To run the executable:

``bash
./converter

---

# Test Cases

## Binary to Decimal

| Binary       | Decimal |
|--------------|---------|
| 0            | 0       |
| 1            | 1       |
| 10           | 2       |
| 11           | 3       |
| --           | --      |
| --           | --      |
| 1 and ten 0  | 512     | false* 
| -1           | 1       | false.

*due to an Overflow
the last 0 wasn't stored
expected decimal: 1024
this does apply to all
greater numbers.                         

## Decimal to Binary

| Decimal |  Binary         |
|---------|-----------------|
| 4       | 0               |
| 5       | 1               |
| 6       | 10              |
| --      | --              |
| --      | --              |
| 512     | 10000000000     |
| 1024    | 10000000000     | False Overflow due to insufficient array size.
| -1      | 1               | false.
