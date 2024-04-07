// // Program to remove vowels from a string

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// string removeVowels(string s)
// {
//     string res;
//     unordered_map<char, int> m = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}};
//     for (char c : s)
//     {
//         if (!m[c])
//             res += c;
//     }
//     return res;
// }
// int main()
// {
//     string s = "Hello";
//     cout << removeVowels(s) << endl;
//     return 0;
// }

// Another approach

#include <iostream>
#include <unordered_map>
using namespace std;

string removeVowels(string s)

{
    string res;
    for (char c : s)     // iterating through the string  // Note: Here we are using a for-each loop to iterate through the string
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            res += c;
    }
    return res;
}

int main()
{
    string s = "Hello";
    cout << removeVowels(s) << endl;
    return 0;
}