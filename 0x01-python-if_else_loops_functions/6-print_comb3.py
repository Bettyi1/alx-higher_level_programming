#!/usr/bin/python3
for val1 in range(0, 10):
    for val2 in range(val1 + 1, 10):
        if val1 == 8 and val2 == 9:
            print("{} {}".format(val1, val2))
        else:
            print("{} {}, ".format(val1, val2), end='')


