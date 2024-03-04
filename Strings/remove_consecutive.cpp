// Program to remove consecutive characters from a string

#include <iostream>
#include <string>
using namespace std;

string removeConsecutive(string s) {
    int i = 0, j = 0;
    while (j < s.size()) {
        if (s[i] != s[j]) {
            i++;
            s[i] = s[j];
        }
        j++;
    }
    return s.substr(0, i + 1);
}

int main() {
    string s = "aaabbbccc";
    cout << removeConsecutive(s) << endl;
    return 0;
}