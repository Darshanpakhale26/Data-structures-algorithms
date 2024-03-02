// Program to move zeros to the end of the array

#include <iostream>
#include <vector>

using namespace std;

void move_zeros(vector<int> &arr) {
    int n = arr.size();        // Size of the array
    int count = 0;             // Count of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[count]);  // Swap the non-zero element with the count-th element
            count++;                    // Increment the count
        }
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 3, 0, 4, 5, 0};
    move_zeros(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}