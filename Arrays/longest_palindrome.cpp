// Program to find the longest palindrome in an array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int palindrome(int num)
{
    int temp = num;
    int rev = 0;
    while (temp > 0)
    {
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp = temp / 10;
    }
    if (rev == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int arr[] = {1, 12, 121, 1221, 112211, 17, 18113, 191};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;                                      // initialize max to the minimum value of integer
    for (int i = 0; i < n; i++)            
    {
        if (palindrome(arr[i]) && max < arr[i])             // if the number is palindrome and greater than max
            max = arr[i];                                   // update max
    }

    if (max == INT_MIN)                                     // if max is still the minimum value of integer
        max = -1;

    cout << max;
}
