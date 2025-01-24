#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    # Write your code here
    c_po =0
    c_ne = 0
    c_zeros = 0
    n = len(arr)
    for i in arr:
        if i > 0:
            c_po += 1
        elif i < 0:
            c_ne += 1
        elif i ==0:
            c_zeros += 1
    print(f"{c_po / n:.6f}")
    print(f"{c_ne / n:.6f}")
    print(f"{c_zeros / n:.6f}")                
if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
