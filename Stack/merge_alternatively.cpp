// Merge String alternatvely    

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "abc";
    string s2 = "def";
    string s3 = "";
    int i = 0;
    int j = 0;
    while (i < s1.length() && j < s2.length()) {
        s3 += s1[i++];
        s3 += s2[j++];
    }
    while (i < s1.length()) {
        s3 += s1[i++];
    }
    while (j < s2.length()) {
        s3 += s2[j++];
    }
    cout << s3 << endl;
    return 0;
}