// Program to reverse a string

// #include <iostream>
// #include <bits/stdc++.h> // include this header file to use reverse function
// using namespace std;

// void reverseString(string str) // function to reverse the string
// {
//     reverse(str.begin(), str.end()); // using inbuilt function to reverse the string
//     cout << str;                     // printing the reversed string
// }
// int main()
// {
//     string str = "mystring"; // initializing the string
//     reverseString(str);      // calling the function to reverse the string

//     return 0;
// }

// Output: gnirtsym

// Time complexity: O(n) where n is the length of the string

// Another approach to reverse a string is to use two pointers. One pointer points to the start of the string and the other pointer points to the end of the string. We swap the characters at the start and end pointers and move the pointers towards each other until they meet in the middle of the string.

#include <iostream>
using namespace std;

void reverseString(string str) // function to reverse the string
{
    int start = 0;              // pointer to the start of the string
    int end = str.length() - 1; // pointer to the end of the string

    while (start < end) // loop until the start pointer is less than the end pointer
    {
        swap(str[start], str[end]); // swapping characters at start and end pointers
        start++;                    // moving the start pointer towards the end
        end--;                      // moving the end pointer towards the start
    }

    cout << str; // printing the reversed string
}

int main()
{
    string str = "mystring"; // initializing the string
    reverseString(str);      // calling the function to reverse the string

    return 0;
}




// Another approach to reverse a string is to use recursion. We can reverse a string recursively by reversing the substring excluding the first character, and then appending the first character at the end of the reversed substring.


#include <iostream>
using namespace std;

void reverseString(string str, int start, int end) // function to reverse the string using recursion
{
    if (start >= end) // base case: if start pointer is greater than or equal to end pointer
    {
        cout << str; // print the reversed string
        return;
    }

    swap(str[start], str[end]); // swap characters at start and end pointers
    reverseString(str, start + 1, end - 1); // recursively call the function with updated pointers
}

int main()
{
    string str = "mystring"; // initializing the string
    reverseString(str, 0, str.length() - 1); // calling the function to reverse the string

    return 0;
}

