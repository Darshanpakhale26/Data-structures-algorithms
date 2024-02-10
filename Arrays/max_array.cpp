// Problem Statement: Find the maximum element in an array.

#include <iostream>
using namespace std;
int maxArr(int arr[], int n)
{
    int max = arr[0];                // Initialize max with first element of array.
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])            // If current element is greater than max, then update max.
        {
            max = arr[i];            // Update max.
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 4, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Element in array is: " << maxArr(arr, n);
}

// Output: Maximum Element in array is: 6
