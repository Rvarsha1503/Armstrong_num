

---

# Armstrong Number Detection

This program determines whether a given number is an Armstrong number or not. An Armstrong number (also known as a narcissistic number or plenary number) is a number that is equal to the sum of its own digits raised to the power of the number of digits.

## Features

- Input a number and check if it's an Armstrong number.
- Calculates the number of digits in the given number.
- Computes the sum of each digit raised to the power of the number of digits.
- Compares the calculated sum with the original number to determine if it's an Armstrong number.

## Usage

1. Clone the repository or download the source code.
2. Compile the C program using a C compiler (e.g., gcc).
3. Run the compiled executable.
4. Enter a number when prompted.
5. The program will determine whether the entered number is an Armstrong number or not and display the result.

## Example

Suppose you input the number 153. The program will calculate the sum of the cubes of its digits as follows:

- For digit 1: \(1^3 = 1\)
- For digit 5: \(5^3 = 125\)
- For digit 3: \(3^3 = 27\)

The sum of these numbers is \(1 + 125 + 27 = 153\). Since the sum matches the original number, 153 is identified as an Armstrong number.

## Input Validation

The program assumes that the input is a positive integer. If non-integer or negative input is provided, the behavior is undefined.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---
