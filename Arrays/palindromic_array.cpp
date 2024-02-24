// Program to check all elements of an array are palindromic or not

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is_palindromic(int n) {
    string s = to_string(n);                    // converting integer to string
    for (int i = 0; i < s.size() / 2; i++) {    
        if (s[i] != s[s.size() - i - 1]) {      // checking if the string is palindromic
            return false;
        }
    }
    return true;
}

bool is_palindromic_array(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (!is_palindromic(arr[i])) {          // checking if the element is palindromic
            return false;
        }
    }
    return true;
}       

int main() {
    vector<int> arr = {121, 131, 1451, 151, 161};
    cout << is_palindromic_array(arr);
    return 0;
}


