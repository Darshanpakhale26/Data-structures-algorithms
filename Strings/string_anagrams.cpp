// Program to check if two strings are anagrams of each other

#include <iostream>
#include <bits/stdc++.h>                   // include this header file to use sort function
using namespace std;

bool areAnagrams(string str1, string str2) // function to check if two strings are anagrams
{
    int n1 = str1.length();                // length of first string
    int n2 = str2.length();                // length of second string

    if (n1 != n2)                          // if the lengths of the strings are not equal, they cannot be anagrams
        return false;

    sort(str1.begin(), str1.end());        // sorting the first string
    sort(str2.begin(), str2.end());        // sorting the second string

    for (int i = 0; i < n1; i++)           // comparing the sorted strings
    {
        if (str1[i] != str2[i])            // if any character is different, the strings are not anagrams
            return false;
    }
    return true;                           // if all characters are same, the strings are anagrams
}

int main()
{
    string str1 = "listen";                // initializing the first string
    string str2 = "silent";                // initializing the second string

    if (areAnagrams(str1, str2))           // calling the function to check if the strings are anagrams
        cout << "The strings are anagrams";
    else
        cout << "The strings are not anagrams";

    return 0;
}