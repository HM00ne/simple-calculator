
# simple-calculator# Simple Calculator

A small command-line calculator written in C. It reads an equation, prints the result, and asks if you want to do another one.

## Features

- Addition (`+`), subtraction (`-`), multiplication (`*`) and division (`/`)
- Works with decimal numbers
- Catches division by zero and unknown operators
- If the input is invalid, it shows an error and asks again
- Keeps running until you answer `n`

## Build

You need a C compiler such as GCC:

```sh
gcc Calculator.c -o calc
```

## Run

```sh
./calc        # Linux / macOS
calc.exe      # Windows
```

## Usage

Type an equation in the form `number operator number`:

```
Enter Equation ('+' '-' '*' '/'): 12.5 * 4

12.5 * 4 = 50.00

Again? (y/n): y

Enter Equation ('+' '-' '*' '/'): 10 / 0
Error: division by zero.

Again? (y/n): n
```

Results are shown with two decimal places.
