// Program to reverse the vowels in a string

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string reverseVowels(string s) {
    unordered_map<char, bool> vowels;
    vowels['a'] = true;
    vowels['e'] = true;
    vowels['i'] = true;
    vowels['o'] = true;
    vowels['u'] = true;
    vowels['A'] = true;
    vowels['E'] = true;
    vowels['I'] = true;
    vowels['O'] = true;
    vowels['U'] = true;
    int i = 0, j = s.size() - 1;
    while (i < j) {
        while (i < j && vowels.find(s[i]) == vowels.end()) {
            i++;
        }
        while (i < j && vowels.find(s[j]) == vowels.end()) {
            j--;
        }
        if (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    return s;
}

int main() {
    string s = "hello";
    cout << reverseVowels(s) << endl;
    return 0;
}