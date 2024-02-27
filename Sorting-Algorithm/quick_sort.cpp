// Program to implement quick sort algorithm
// Time Complexity: O(nlogn)
// Space Complexity: O(logn)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];          // choose the last element as the pivot
    int i = low - 1;                // index of the smaller element
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {       // if the current element is less than the pivot
            i++;                    // increment the index of the smaller element
            swap(arr[i], arr[j]);   // swap the elements at i and j
        }
    }
    swap(arr[i + 1], arr[high]);     // swap the pivot with the element at i+1
    return i + 1;                    // return the index of the pivot
}

void quick_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);     // find the partitioning index
        quick_sort(arr, low, pi - 1);           // sort the left subarray
        quick_sort(arr, pi + 1, high);          // sort the right subarray
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    quick_sort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}