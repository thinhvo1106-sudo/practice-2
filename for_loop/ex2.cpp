#include<iostream>
#include <string>
#include <cctype>   
using namespace std;

int findSpecialCharacter(string providedString);
int main() {
    string sentence = "Hello@123!"; 
    int count = findSpecialCharacter(sentence);
    if(count==0){
        cout<<"There are no special character";
    }
    else{
    cout << "There are " << count << " in the provided sentence." << endl;
    return 0;}
}
/**Find special character */
int findSpecialCharacter(string providedString) {
    char specialChar = '!';
    int count = 0;
    for(int pos=0; pos<10 ; pos++){
        if(providedString[pos] == specialChar){
            count++;
        }
        
    }

    return count;
}