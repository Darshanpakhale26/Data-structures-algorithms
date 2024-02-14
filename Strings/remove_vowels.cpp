// Program to remove vowels from a string

#include <iostream>
#include <unordered_map>
using namespace std;

string removeVowels(string s)
{
    string res;
    unordered_map<char, int> m = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}};
    for (char c : s)
    {
        if (!m[c])
            res += c;
    }
    return res;
}
int main()
{
    string s = "leetcodeisacommunityforcoders";
    cout << removeVowels(s) << endl;
    return 0;
}