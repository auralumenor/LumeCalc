
# 🌟 LumeCalc

**LumeCalc** is a lightweight, fast, and extensible calculator built in C. Designed for simplicity and performance, it supports a range of arithmetic and scientific operations directly from the command line.
## 🚧 Work in Progress

This project is not yet complete and is actively being developed. Expect frequent updates and possible breaking changes.

## 🚀 Features

- Basic arithmetic: addition, subtraction, multiplication, division
- Scientific functions: sine, cosine, tangent, logarithms
- Expression parsing with operator precedence
- Error handling for invalid input and division by zero
- Modular design for easy extension

## 🛠️ Installation

### Prerequisites

- GCC or any C compiler
- Make (optional, for build automation)

### Build Instructions

```bash
git clone https://github.com/yourusername/lumecalc.git
cd lumecalc
gcc -o lumecalc main.c calc.c utils.c -lm
```
### Or use the provided Makefile:
```bash
make
```
## 📦 Usage
```bash
./lumecalc "3 + 5 * (2 - 1)"
```
### You can also run it interactively:
```bash
./lumecalc
> Enter expression: sin(45) + log(10)
```

## 📁 Project Structure

| File         | Description                          |
|--------------|--------------------------------------|
| `main.c`     | Entry point and CLI handling         |
| `calc.c`     | Core calculation logic               |
| `utils.c`    | Helper functions and input parsing   |
| `calc.h`     | Header for calculation functions     |
| `utils.h`    | Header for utility functions         |
| `Makefile`   | Build automation                     |




## 🧪 Testing
Basic test cases are included in tests/. You can run them manually or integrate with a testing framework like cmocka.

## 📖 License
This project is licensed under the MIT License. See LICENSE for details.

## 🙌 Contributing
Pull requests are welcome! For major changes, please open an issue first to discuss what you'd like to change.




