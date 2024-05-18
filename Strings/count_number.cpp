// Program to count the number in char string 

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "d7r5@gf6";

    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}








