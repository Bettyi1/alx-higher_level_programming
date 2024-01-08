#!/usr/bin/python3
def no_c(my_string):
    if my_string[:]:
        string_copy = my_string.translate({ord("c"): None})
        string_copy2 = string_copy.translate({ord("C"): None})
        return (string_copy2)
    return (my_string)
