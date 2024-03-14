// Program to find the first non-repeating character in a string

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(string s) {
    unordered_map<char, int> count;
    for (int i = 0; i < s.length(); i++) {
        count[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++) {
        if (count[s[i]] == 1) {
            return s[i];
        }
    }
    return '$';
}

int main() {
    string s = "helhlo";
    cout << firstNonRepeatingChar(s) << endl;  // D
    return 0;
}