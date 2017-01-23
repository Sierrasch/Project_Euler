import math

i = math.factorial(100)
sum = 0

while (i > 0):
    onesPlace = i % 10
    sum += onesPlace
    i -= onesPlace
    i /= 10
print sum
    
