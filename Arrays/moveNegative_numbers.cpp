// Problem statement: Move all the negative elements to one side of the array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void moveElements(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)                // if the element is negative
        {
            if (i != j)                // if the element is not at the right position
            {
                swap(arr[i], arr[j]);  // swap the elements
            }
            j++;                       // increment the index
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3, 1, -5, 8, -9};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveElements(arr, n);
    return 0;
}
