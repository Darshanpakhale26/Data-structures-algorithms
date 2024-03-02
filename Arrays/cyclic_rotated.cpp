// Program to print cyclic rotated array by 1 position

#include <iostream>
#include <vector>

using namespace std;
void cyclic_rotate(vector<int> &arr) {
    int n = arr.size();                // Size of the array
    int temp = arr[n - 1];             // Store the last element of the array
    for (int i = n - 1; i > 0; i--) {  // Traverse the array from the end
        arr[i] = arr[i - 1];           // Shift the elements of the array by 1 position
    }
    arr[0] = temp;                     // Assign the last element to the first position of the array
}

int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    cyclic_rotate(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}