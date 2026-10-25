# Operations on Digits

This folder contains C programs based on **operations performed on the digits of a number**.

The programs demonstrate how to extract, display, count, and calculate the sum of digits using basic arithmetic operations in C.

## 📌 Concepts Covered

- Extracting individual digits from a number
- Displaying digits of a number
- Removing digits from a number
- Counting the total number of digits
- Calculating the sum of digits
- Using functions for digit operations
- Using `while` loops for repeated digit processing
- Handling negative numbers

## 🔢 Important Logic

Two basic operations are mainly used:

### 1. Extracting the Last Digit

```c
iDigit = iNo % 10;
```

The `% 10` operation extracts the last digit of the number.

For example:

```text
1345700 % 10 = 0
```

### 2. Removing the Last Digit

```c
iNo = iNo / 10;
```

Integer division by `10` removes the last digit.

For example:

```text
1345700 / 10 = 134570
```

These two operations are repeatedly used to process every digit of a number.

## 📂 Programs

| Program | Description |
|---|---|
| `OperationOnDigit1.c` | Displays the digits of a fixed number using `% 10` and `/ 10`. |
| `OperationOnDigit2.c` | Displays the digits and shows the changing value of the number after each division. |
| `OperationOnDigit3.c` | Displays the number before extracting each digit and shows the final value after processing. |
| `OperationOnDigit4.c` | Performs digit display using a separate `DisplayDigit()` function. |
| `OperationOnDigit5.c` | Accepts a number from the user and displays each digit using a `while` loop. |
| `OperationOnDigit6.c` | Displays the digits while returning the original number from the function. |
| `OperationOnDigit7.c` | Counts the total number of digits in a number. |
| `OperationOnDigit8.c` | Displays each digit and counts the total number of digits. |
| `OperationOnDigit9.c` | Displays the digits and calculates their sum. |
| `OperationOnDigit10.c` | Calculates the sum of digits directly using `% 10` and `/ 10`. |

## 🧠 Common Algorithm

For most digit-based operations:

1. Accept an integer.
2. Extract the last digit using `% 10`.
3. Perform the required operation on that digit.
4. Remove the last digit using `/ 10`.
5. Repeat until the number becomes `0`.

### Example

For:

```text
Number = 12345
```

The digits are processed as:

```text
12345 % 10 → 5
12345 / 10 → 1234

1234 % 10 → 4
1234 / 10 → 123

123 % 10 → 3
123 / 10 → 12

12 % 10 → 2
12 / 10 → 1

1 % 10 → 1
1 / 10 → 0
```

## 🛠️ Technologies Used

- **Language:** C
- **Compiler:** GCC
- **Header Files:** `stdio.h`, `stdlib.h`, `stdbool.h`
- **Concepts:** Functions, loops, arithmetic operators, variables, input/output

## ▶️ How to Compile and Run

Using GCC:

```bash
gcc OperationOnDigit1.c -o OperationOnDigit1
./OperationOnDigit1
```

For Windows:

```bash
gcc OperationOnDigit1.c -o OperationOnDigit1.exe
OperationOnDigit1.exe
```

## 🎯 Learning Objective

The purpose of these programs is to understand the fundamental logic behind **digit manipulation in C**. These concepts are useful for solving problems such as:

- Counting digits
- Finding the sum of digits
- Reversing a number
- Checking palindrome numbers
- Finding individual digits
- Checking Armstrong numbers
- Finding frequency of digits
- Performing other number-based operations
