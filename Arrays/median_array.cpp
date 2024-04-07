// Program to find the median of an unsorted array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float medianArray(vector<int> arr)
{
    sort(arr.begin(), arr.end()); // Sort the array
    int n = arr.size();
    if (n % 2 == 0)
    {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0; // If the size of the array is even, return the average of the middle two elements
    }
    return arr[n / 2]; // If the size of the array is odd, return the middle element
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << medianArray(arr) << endl;
    return 0;
}

// The time complexity of this program is O(nlogn) because we are sorting the array. The space complexity is O(1) because we are not using any extra space.
