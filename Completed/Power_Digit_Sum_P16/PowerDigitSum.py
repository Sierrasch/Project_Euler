import math

i = 2 ** 1000
sum = 0

while (i > 0):
    onesPlace = i % 10
    sum += onesPlace
    i -= onesPlace
    i /= 10
print sum
    
