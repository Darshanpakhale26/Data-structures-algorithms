// Program to reverse an array

#include <iostream>
#include <bits/stdc++.h> // include this header file to use reverse function
using namespace std;

void reverseArray(int arr[], int n)   
{
    reverse(arr, arr + n);      // using inbuilt function to reverse the array
    for (int i = 0; i < n; i++) // printing the reversed array
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {4, 5, 3, 6, 7};          // initializing the array
    int n = sizeof(arr) / sizeof(arr[0]); // calculating the size of array
    reverseArray(arr, n);                 // calling the function to reverse the array

    return 0;
}

// Output: 7 6 3 5 4