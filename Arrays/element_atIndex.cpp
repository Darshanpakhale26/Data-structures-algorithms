// Program to find the element at a given index

#include <iostream>
#include <vector>

using namespace std;

int element_atIndex(vector<int> arr, int index) {
    return arr[index];
}

int main() {
    vector<int> arr = {1, 3, 5, 2, 2};
    int index = 2;
    cout << element_atIndex(arr, index) << endl;
    return 0;
}