// Problem Statement: Sort the array in ascending order.

#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int arr[], int n)
{
    sort(arr, arr + n);                // Sort the array using inbuilt sort function.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";         // Print the sorted array.
    }
}
int main()
{
    int arr[] = {2, 1, 1, 0, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After Sorting: ";
    sortArray(arr, n);                 // Function call to sort the array.

    return 0;
}
