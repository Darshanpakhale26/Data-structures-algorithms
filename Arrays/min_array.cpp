// Problem Statement: Find the minimum element in an array.

#include <iostream>
#include<algorithm>
using namespace std;
int minArr(int arr[], int n)
{
    int min = arr[0];             // Initialize min with first element of array.
    for (int i = 1; i < n; i++)   
    {
        if (min > arr[i])         // If current element is smaller than min, then update min.
        {
            min = arr[i];         // Update min.
        }
    }
    return min; 
}
int main()
{
    int arr[] = {1, 4, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Element in array is: " << minArr(arr, n);
}

// Output: Minimum Element in array is: 1