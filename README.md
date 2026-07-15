# 🔢 Arrays and Passing by Reference

## 📝 Purpose

This program demonstrates dynamic memory allocation and modular programming
in C++.

The program takes a positive integer as input, creates two arrays of that size
with random values (1-100), adds them, calculates each array's sum and average,
reverses the arrays, and frees all memory.

### ✅ Features

- Command line argument validation
- Dynamic array allocation using `new[]`
- Pointer based array manipulation
- Array addition
- Sum and average calculation
- Array reversal
- Memory cleanup using `delete[]`

## 🧰 Requirements

- A Linux environment (Ubuntu recommended, including via VM)
- The GNU C++ compiler (`g++`)

Verify installation:

```bash
g++ --version
```

## ✅ Compilation Instructions (Required)

To deploy this project run:

```bash
g++ -I ./ *.cpp -o arrays
```

### ▶️ Execution

Run the program with:

`./arrays 5`

### ⏪ Expected Input

`./arrays 10`

### ⏩ Expected Output

- Display the two randomly generated arrays
- Displays the added result array
- Display the sum and average of each array
- Display the reversed arrays

If invalid input:

`./arrays`

The program will display:

`usage: arrays n (where n is a number above 0)`

### ❗ Executable not found

Run executable using:
```bash
g++ -I ./ *.cpp -o arrays
```
Run it using:

`./arrays`

## 🧑‍💻 Author
- Adrian Vargas
- GitHub: [@adrian-vargas](https://www.github.com/AVargas84)
