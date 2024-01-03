#!/usr/bin/python3
def remove_char_at(str, n):
    val = ''
    k = 0
    for char in str:
        if k != n:
            val += str[k]
            k += 1
            return (val)
