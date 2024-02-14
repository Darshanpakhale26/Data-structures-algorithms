// Program to count the number of vowels in a string

#include <iostream>
#include <unordered_map>
using namespace std;
int countVowels(string s)
{

    unordered_map<int, int> map;

    for (int i = 0; i < s.length(); i++)
    {
        map[s[i]]++;
    }
    int count = 0;
    for (auto i : map)
    {
        if (i.first == 'a' || i.first == 'e' || i.first == 'i' || i.first == 'o' || i.first == 'u')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    cout << "The vowels in the string are: " << countVowels(str);
}