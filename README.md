# data-calculations

Reads a sequence of positive float values and prints the largest value and their sum in C.

---

## About

Written in C, this program reads positive float values from standard input one at a time. Input stops when a value of zero or less is entered. It then prints the largest value seen and the total sum. If no valid values were entered, it prints a message indicating that no data was provided. The program uses Swedish-language prompts.

## Usage

Run the program and enter positive float values one per line. Enter zero or a negative number to stop. The result is printed to stdout.

## Getting Started

### Prerequisites

- A C compiler (gcc or equivalent)

### Building

**Unix**
```
gcc -o data-calculations src/data-calculations.c
```

**Windows**
```
gcc -o data-calculations.exe src\data-calculations.c
```

### Running

**Unix**
```
./data-calculations
```

**Windows**
```
data-calculations.exe
```

---

MIT License - see [LICENSE](LICENSE)
