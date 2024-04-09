// Program to find the second smallest element in an array

#include <iostream>
#include <climits>   // For INT_MAX
using namespace std;

int secondSmallest(int arr[], int n)
{
    int first, second;
    first = second = INT_MAX; // Initialize first and second with maximum integer value.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first) // If current element is smaller than first, then update first and second.
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first) // If current element is smaller than second and not equal to first, then update second.
        {
            second = arr[i];
        }
    }
    return second;
}

int main()
{
    int arr[] = {1, 4, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second Smallest Element in array is: " << secondSmallest(arr, n);
}
