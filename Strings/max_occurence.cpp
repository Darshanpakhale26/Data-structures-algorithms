// Program to find maximum occurence of a character in a string

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    map<char, int> mp;                      // Map to store the occurence of each character
    for (int i = 0; i < str.length(); i++) {
        mp[str[i]]++;                        // Increment the occurence of the character
    }
    int max = 0;
    char max_char;
    for (auto i : mp) {
        if (i.second > max) {         // i.second is the occurence of the character
            max = i.second;           // i.first is the character
            max_char = i.first;       // i is a pair of character and its occurence
        }
    }
    cout << "Maximum occurence of a character is " << max << " of " << max_char << endl;
    return 0;
}