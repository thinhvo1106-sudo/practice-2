#include<iostream>
using namespace std;
int main() {
    int myArr[5] = {2,10,9,8,7};

    int biggestNum = 0;

    /**TODO: figure out the array */
    cout << "Size array" << sizeof(myArr) << endl;

    for(int i = 0; i < 5; i++) {
        if(biggestNum < myArr[i]) {
            biggestNum = myArr[i];
        }
    }

    return 0;
}
    /**
    biggestNum = 0
    i=0 =>myArr[0] = 2 
    =>biggestNum = 2
    i=1 => myArr[1] = 10
    =>biggestNum = 10
    i=2 => myArr[2] = 9
    => biggestNum = 10
    i=3 => myArr[3] = 8
    => biggestNum = 10
    i=4 => myArr[4] = 7
    => biggestNum = 10 */



