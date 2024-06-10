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

// time complexity: O(nlogn) where n is the length of the 


// Another Approach to check if two strings are anagrams of each other is to use a hash map. We can create a hash map to store the frequency of characters in the first string. Then, we iterate over the second string and decrement the frequency of each character in the hash map. If the frequency of any character becomes negative or if a character is not present in the hash map, the strings are not anagrams. Otherwise, the strings are anagrams.



#include <iostream>
#include <unordered_map>
using namespace std;

bool areAnagrams(string str1, string str2) // function to check if two strings are anagrams
{
    int n1 = str1.length();                // length of first string
    int n2 = str2.length();                // length of second string

    if (n1 != n2)                          // if the lengths of the strings are not equal, they cannot be anagrams
        return false;

    unordered_map<char, int> freq;         // hash map to store frequency of characters

    for (char c : str1)                    // counting frequency of characters in first string
        freq[c]++;

    for (char c : str2)                    // decrementing frequency of characters in second string
    {
        if (freq.find(c) == freq.end() || freq[c] == 0) // if character not present or frequency becomes negative
            return false;
        freq[c]--;
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