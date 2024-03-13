// Remove Junk/Special characters from a string

#include <iostream>
#include <unordered_map>
using namespace std;

string removeJunk(string s)
{
    string res;
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
            res += c;
    }
    return res;
}

int main()
{
    string s = "Hello!@&*% How *!@#are you? 123";
    cout << removeJunk(s) << endl;
    return 0;
}
