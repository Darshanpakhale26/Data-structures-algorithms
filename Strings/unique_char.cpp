// Program to print the only unique characters in a string

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string unique_char(string s) {
    unordered_map<char, int> count;
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (count.find(s[i]) == count.end()) {
            count[s[i]] = 1;
        } else {
            count[s[i]]++;
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (count[s[i]] == 1) {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string s = "Darshan";
    cout << unique_char(s) << endl;  // He, Wrd!
    return 0;
}