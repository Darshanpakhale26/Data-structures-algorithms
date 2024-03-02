// Program to print the only unique characters in a string

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string unique_char(string s) {
    unordered_map<char, int> count;
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (count.find(s[i]) == count.end()) {  // If the character is not present in the map
            count[s[i]] = 1;                   // Add the character to the map
        } else {
            count[s[i]]++;                  // If the character is already present, increment the count
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