// Program to check if a string is a palindrome

#include <iostream>
#include <bits/stdc++.h>               // include this header file to use reverse function
using namespace std;

bool isPalindrome(string str)          // function to check if the string is a palindrome
{
    string rev = str;                  // creating a copy of the string
    reverse(rev.begin(), rev.end());   // using inbuilt function to reverse the string

    if (str == rev)                    // comparing the original and reversed strings
        return true;                   // if they are same, the string is a palindrome
    else
        return false;                  // if they are different, the string is not a palindrome
}

int main()
{
    string str = "madam";              // initializing the string

    if (isPalindrome(str))             // calling the function to check if the string is a palindrome
        cout << "The string is a palindrome";
    else
        cout << "The string is not a palindrome";

    return 0;
}