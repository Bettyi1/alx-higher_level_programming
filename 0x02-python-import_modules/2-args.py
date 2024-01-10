#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    j = len(argv) - 1
    if j < 1:
        print("{} arguments.".format(j))
    elif j == 1:
        print("{} argument:".format(j))
    else:
        print("{} argyments:".format(j))
        for i in range (j):
            print("{}: {:s}".format(i + 1, argv[i + 1]))
