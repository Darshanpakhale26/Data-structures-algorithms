// Given a sentence cstr, written in camel case, 
//The task is to print the words of the sentence separately. in lower case.
// Example:
// Input: camelCase
// Output: camel case

#include <iostream>
#include <string>
using namespace std;

void camelCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            cout << " ";
        }
        cout << (char)tolower(str[i]);  // Convert the character to lower case 
    }
}

int main() {
    string str;
    cout << "Enter a string in camel case: ";
    getline(cin, str);
    cout << "The sentence in lower case: ";
    camelCase(str);
    cout << endl;
    return 0;
}