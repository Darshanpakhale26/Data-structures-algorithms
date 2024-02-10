// Program to find the occurence of k element in an array

#include <iostream>
using namespace std;
int occurence(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)               
    {
        if (k == arr[i])                // if the element is equal to k
        {  
            count++;                    // increment the count
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 4, 2, 2, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    cout << "The occurence of " << k << " is " << occurence(arr, n, k);
}
