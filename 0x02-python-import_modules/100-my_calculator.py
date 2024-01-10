#!/usr/bin/python3
if __name__ == "__main__":
    from calculator_1 import add, sub, mul, div
    from sys import argv
    count_args = len(argv)
    if count_args != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit (1)
    a = int(arg[1])
    operator = argv([2])
    b = argv([3])
    if operator == '+':
        print(f"{a} {operator} {a} = {add(a, b)}")
    elif operator == '-':
        print(f"{a} {operator} {a} = {sub(a, b)}")
    elif operator == '*':
        print(f"{a} {operator} {a} = {mul(a, b)}")
    elif operator == '/':
        print(f"{a} {operator} {a} = {div(a, b)}")
    else:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)
