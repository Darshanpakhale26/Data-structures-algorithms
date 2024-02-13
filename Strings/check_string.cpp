// Program to check whether charcters vowels or consonants

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void check_string(string s) {
    unordered_map<char, int> map;                    // creating a map
    for (int i = 0; i < s.size(); i++) {
        map[s[i]]++;                                 // inserting elements in map
    }
    for (auto i : map) {                             // iterating through the map
        if (i.first == 'a' || i.first == 'e' || i.first == 'i' || i.first == 'o' || i.first == 'u') {     // if the character is vowel
            cout << i.first << " is vowel" << endl;  
        }
        else{
            cout << i.first << " is consonant" << endl; 
        }
    }
}

int main() {
    string s = "hello";
    check_string(s);
    return 0;
}