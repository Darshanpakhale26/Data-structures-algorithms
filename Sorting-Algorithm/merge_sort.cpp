// Program to implement merge sort algorithm
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;             // size of the left subarray
    int n2 = r - m;                 // size of the right subarray
    vector<int> L(n1), R(n2);       // create temporary arrays
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];          // copy the left subarray
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];      // copy the right subarray
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {         // if the left subarray element is less than or equal to the right subarray element
            arr[k] = L[i];          // copy the left subarray element
            i++;
        } else {
            arr[k] = R[j];          // copy the right subarray element
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];              // copy the remaining elements of the left subarray
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];              // copy the remaining elements of the right subarray
        j++;
        k++;
    }
}

void merge_sort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;    // find the middle element
        merge_sort(arr, l, m);      // sort the left subarray
        merge_sort(arr, m + 1, r);  // sort the right subarray
        merge(arr, l, m, r);        // merge the sorted subarrays
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    merge_sort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}