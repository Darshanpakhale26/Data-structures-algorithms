// Program to find the sum of elements in an array

#include <iostream>
using namespace std;
int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)         // iterate through the array
    {
        sum = sum + arr[i];             // add the elements of the array
    }
    return sum;
}
int main()
{
    int arr[] = {4, 5, 6, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The sum of elements of array is: " << sumArray(arr, size);

    return 0;
}