// input: "aaabbc"
// output: "a3b2c1"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string string_format(string s) {
    int n = s.size();                // size of the string
    vector<int> result(n, 0);        // vector to store the count of each character
    for (int i = 0; i < n; i++) {    // iterate through the string
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {         // if the next character is same as the current character
            count++;                             // increment the count
            i++;                       // move to the next character
        }
        result[i] = count;            // store the count of the character
    }
    string res;
    for (int i = 0; i < n; i++) {              // iterate through the result vector
        if (result[i] != 0) {                  // if the count is not zero
            res.push_back(s[i]);               // push the character into the result string
            res.push_back(result[i] + '0');       // push the count into the result string
        }
    }
    return res;
}

int main() {
    string s = "aaabbc";
    cout << string_format(s) << endl;
    return 0;
}