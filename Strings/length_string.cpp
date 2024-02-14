// Program to find the length of a string

#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int length = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        length++;
    }
    cout << "The length of the string is " << length;
    return 0;
}




