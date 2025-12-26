# find the factorial of an number

def findFactorial(inputNum): 
    if inputNum == 1 or inputNum == 0: 
        return 1
    
    return inputNum * findFactorial(inputNum - 1)


inputNum = 10
factorial = findFactorial(inputNum);
print(f"The factorial of {inputNum} is {factorial}.")