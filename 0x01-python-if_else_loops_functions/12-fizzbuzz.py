#!/usr/bin/python3
def fizzbuzz():
    for i in range(100):
        if i % 5 != 0 and i % 3 == 0:
            print("Fizz ", end='')
        elif i % 3 != 0 and i % 5 == 0:
            print("Buzz ", end='')
        elif i % 3 == 0 and i % 5 == 0:
            print("Fizz Buzz ", end='')
        else:
            print("{} ".format(i), end='')