#include<iostream>
#include <string>
using namespace std;

int findSpecialCharacter(string providedString);
int main() {
    string sentence = "Hello@123!";
    int count = findSpecialCharacter(sentence);

    cout << "There are " << count << " in the provided sentence." << endl;
    return 0;
}
/**Find special character */
int findSpecialCharacter(string providedString) {
    //TODO
    return 0;
}