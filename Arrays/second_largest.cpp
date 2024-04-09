// Program to find the second largest element in an array

#include <iostream>
#include <climits>   // For INT_MIN

using namespace std;

int secondLargest(int arr[], int n)
{
    int first, second;
    first = second = INT_MIN; // Initialize first and second with minimum integer value.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first) // If current element is greater than first, then update first and second.
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) // If current element is greater than second and not equal to first, then update second.
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
    cout << "Second Largest Element in array is: " << secondLargest(arr, n);
}