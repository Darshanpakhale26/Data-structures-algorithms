// Program to check given string is palindrome or not

#include <iostream>
#include <bits/stdc++.h> // include this header file to use reverse function
using namespace std;

void isPalindrome(string str) // function to check the string is palindrome or not
{
    string rev = str;                // initializing a new string with the given string
    reverse(rev.begin(), rev.end()); // using inbuilt function to reverse the string
    if (str == rev)                  // comparing the original string with the reversed string
    {
        cout << "The given string is a palindrome"; // printing the result
    }
    else
    {
        cout << "The given string is not a palindrome"; // printing the result
    }
}
int main()
{
    string str = "madam"; // initializing the string
    isPalindrome(str);    // calling the function to check the string is palindrome or not

    return 0;
}