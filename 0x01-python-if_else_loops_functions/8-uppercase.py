#!/usr/bin/python3
def uppercase(str):
    for iter in str:
        val = iter
        if (ord(val) >= 97 and ord(val) <= 123):
            val = chr(ord(iter) - 32)
            print("{}".format(val), end='')
        print()
