// Program to reverse words in a string

#include <bits/stdc++.h>
using namespace std;

void reverseWords(string &s) {
    stack<string> st;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            st.push(word);
            word = "";
        } else {
            word += s[i];
        }
    }
    st.push(word);
    s = "";
    while (!st.empty()) {
        s += st.top();
        st.pop();
        if (!st.empty()) {
            s += " ";
        }
    }
}
int main() {
    string s = "Hello, my name is John";
    reverseWords(s);
    cout << s << endl;
    return 0;
}