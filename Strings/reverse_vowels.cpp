// Program to reverse the vowels in a string

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string reverseVowels(string s) {
    unordered_map<char, bool> vowels;      // using a hash map to store the vowels
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

// Another approach to reverse the vowels in a string is to use two pointers. One pointer points to the start of the string and the other pointer points to the end of the string. We check if the characters at the start and end pointers are vowels. If they are vowels, we swap them and move the pointers towards each other. If they are not vowels, we move the pointers without swapping the characters. We continue this process until the pointers meet in the middle of the string.



#include <iostream>
#include <string>

using namespace std;

string reverseVowels(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (isVowel(s[i]) && isVowel(s[j])) {
            swap(s[i], s[j]);
            i++;
            j--;
        } else if (isVowel(s[i])) {
            j--;
        } else if (isVowel(s[j])) {
            i++;
        } else {
            i++;
            j--;
        }
    }
    return s;
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
    string s = "hello";
    cout << reverseVowels(s) << endl;
    return 0;
}

