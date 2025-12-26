# Given a non-negative integer n, find the sum of its digits using recursion only

def findSumItsDigit(nonNegInt):
    
    if (nonNegInt < 10):
        return nonNegInt
    return nonNegInt % 10 + findSumItsDigit(nonNegInt // 10)

n = 8989
sumItsDigit = findSumItsDigit(n)
print(f"Sum of its digit {sumItsDigit}");