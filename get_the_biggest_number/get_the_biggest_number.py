numList = [10,3,6,2,8]

def get_the_biggest_number(numList):
    numList.sort(reverse = True)
    return numList[0]

biggest_number = get_the_biggest_number(numList)
print("The biggest number is ", biggest_number)