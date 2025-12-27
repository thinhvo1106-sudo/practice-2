#include<iostream>
#include<vector>
using namespace std;
int sumNumber(vector<int> myArr);
int main(){
    vector<int> listNumber={12, 45, 7, 89, 23, 56, 3, 91, 34, 67, 18, 50, 82, 5, 29, 74, 11, 63, 98, 42};
    cout<<"The sum of odd numbers is "<<sumNumber(listNumber)<<endl;
    return 0;
}
int sumNumber(vector<int>myArr){
    int len=myArr.size();
    int sumOfNum=0;
    for(int pos=0; pos < len; pos++){
        if(myArr[pos] % 2 != 0){
            sumOfNum=sumOfNum + myArr[pos];
        }
        
    }
    return sumOfNum;
}