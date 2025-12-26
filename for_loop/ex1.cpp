#include<iostream>
#include <string>
using namespace std;

int countNum(int myArr[], int num);
int main() {
    int myArr[8] = {2,10,9,8,7,2,4,6};
    int num = 2;
    int count = countNum(myArr, num);
    if(count==0){
        cout<<"The number does not exist"<<endl;
    }else {
        cout << "The number exist " << count << endl;
    }
    


    return 0;
}

/** Find whether an number in the given array */
bool findNum(int myArr[], int num) {
    for(int pos = 0; pos < 5; pos++) {
        if(num == myArr[pos]) {
            return true;
        }
    }
    return false;
}

/** Find whether an number in the given array. If yes, how many time does it exist? */
int countNum(int myArr[], int num) {
    int count = 0;
    for( int pos=0;pos<8;pos++){
        if(num == myArr[pos]) {
            count++;
        }
    }
    return count;
}

String 






