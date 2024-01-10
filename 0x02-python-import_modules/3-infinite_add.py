#!usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    add_val = 0
    k = len(argv)
    for i in range(1, k):
        add_val += int(argv[i])
    print("{}".format(add_val))
