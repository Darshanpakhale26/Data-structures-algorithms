// Program to reverse a string

#include <iostream>
#include <bits/stdc++.h> // include this header file to use reverse function
using namespace std;

void reverseString(string str) // function to reverse the string
{
    reverse(str.begin(), str.end()); // using inbuilt function to reverse the string
    cout << str;                     // printing the reversed string
}
int main()
{
    string str = "mystring"; // initializing the string
    reverseString(str);           // calling the function to reverse the string

    return 0;
}

// Output: gnirtsym

// Time complexity: O(n) where n is the length of the string









