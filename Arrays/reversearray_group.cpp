// Program to reverse an array in groups of given size

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n, int k)
{
    for (int i = 0; i < n; i += k)
    {                                      // i is incremented by k
        int left = i;                      // left is i
        int right = min(i + k - 1, n - 1); // right is minimum of i+k-1 and n-1

        while (left < right)
        {                                // swap elements from left to right
            swap(arr[left], arr[right]); // swap elements
            left++;                      // increment left
            right--;                     // decrement right
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    reverseArray(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Output of the program:
// 3 2 1 6 5 4 8 7