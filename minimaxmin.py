#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#
def miniMaxSum(arr):
    # Write your code here
    n = len(arr)
    arr.sort()
    max_value = 0
    min_value = 0
    j = n - 1
    for i in range(n-1):
        min_value += arr[i]
        max_value += arr[j]
        j -= 1 
    print(min_value, max_value)
if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
