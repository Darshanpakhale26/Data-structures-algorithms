// Bubble Sort Algorithm
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubble_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {             // n-1 because the last element will be sorted automatically
        for (int j = 0; j < n-i-1; j++) {       // last i elements are already sorted, so we don't need to check them
            if (arr[j] > arr[j+1]) {            // if the current element is greater than the next element, swap them
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    bubble_sort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}