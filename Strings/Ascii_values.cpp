// input : ABC
// output : 65 66 67

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "ABC";
    for (char c : s) {   // iterate through the string
        cout << (int)c << " ";    // print the ascii value of the character
    }
    return 0;
}

