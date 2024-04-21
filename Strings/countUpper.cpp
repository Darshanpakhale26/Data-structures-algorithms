// Given a sentence in camel case, return the number of words in the sentence.

#include <iostream>
#include <string>
using namespace std;

int countWords(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string in camel case: ";
    getline(cin, str);
    cout << "Number of words in the sentence: " << countWords(str) << endl;
    return 0;
}