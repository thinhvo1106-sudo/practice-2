#include<iostream>
#include <vector>
using namespace std;
int sumNumber(vector<int> myArr);
int main() {
    vector<int> numList = {3, 8, 15, 22, 7, 14, 19, 26, 31, 4, 9, 18, 27, 10, 5, 16, 21, 12, 29, 6};

    /**TODO: find sum of all even numbers in the list */
    cout<<"The sum of all even numbers is "<< sumNumber(numList)<<endl;
    
    return 0;
}
int sumNumber(vector<int> myArr){
    int len = myArr.size();
    int sumOfNum = 0;
    for(int pos=0; pos < len; pos++){
        if(myArr[pos] % 2 == 0 ){
            sumOfNum = sumOfNum + myArr[pos];
        }
    }
    return sumOfNum;
 }