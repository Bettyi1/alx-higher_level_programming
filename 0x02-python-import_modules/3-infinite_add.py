#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    val = 0
    for i in range(1, len(argv)):
        val += int(argv[i])
    print("{}".format(val))