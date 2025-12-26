#include<iostream>
using namespace std;

bool findNum(int myArr[], int num);
int main() {
    int myArr[5] = {2,10,9,8,7};
    int num = 5;
    bool found = findNum(myArr, num);

    if (found) {
        cout << "Find the number" << endl;
    } else {
        cout << "Cannot find the number" << endl;
    }

    return 0;
}

/** Find whether an number in the given array */
bool findNum (int myArr[], int num) {
    for(int pos = 0; pos < 5; pos++) {
        if(num == myArr[pos]) {
            return true;
        }
    }
    return false;
}





