#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

def getTotalX(a, b):
    # Write your code here
    def boi(x,y):
        return (x*y) // math.gcd(x,y)
    def uoc(x,y):
        return math.gcd(x,y)
    boi_a = a[0]
    for num in a[1:]:
        boi_a = boi(boi_a,num)
    uoc_b = b[0]
    for num in b[1:]:
        uoc_b = uoc(uoc_b,num)
    count = 0
    for num in range(boi_a,uoc_b + 1,boi_a):
        if uoc_b % num ==0:
            count +=1                   
    return count        
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
