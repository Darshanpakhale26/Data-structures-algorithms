// Insertion Sort Algorithm
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertion_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {               // start from the second element
        int key = arr[i];                       // store the current element
        int j = i-1;                            // start comparing with the previous element
        while (j >= 0 && arr[j] > key) {        // if the previous element is greater than the current element
            arr[j+1] = arr[j];                  // move the previous element to the next position
            j--;                                // move to the previous element
        }
        arr[j+1] = key;                         // insert the current element in the correct position
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    insertion_sort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}