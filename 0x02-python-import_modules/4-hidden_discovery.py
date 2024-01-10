#!usr/bin/python3
if __name__ == "__main__":
    from hidden_4 import *
    functs = dir()
    for i in range (0, len(functs))
    if functs[i][:2] != "__":
        print("{:s}".format(functs[i]))
