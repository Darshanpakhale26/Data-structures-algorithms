// Program to remove all occurrences of a character from a string

#include <iostream>
#include <string>

using namespace std;

string remove_char(string s, char c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != c) {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string s = "Hello, World!";
    char c = 'l';
    cout << remove_char(s, c) << endl;  // Heo, Word!
    return 0;
}


// Another approach 

#include <iostream>
#include <string>

using namespace std;

string remove_char(string s, char c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            continue;
        }
        result += s[i];
    }
    return result;
}

int main() {
    string s = "Hello, World!";
    char c = 'l';
    cout << remove_char(s, c) << endl;  // Heo, Word!
    return 0;
}
