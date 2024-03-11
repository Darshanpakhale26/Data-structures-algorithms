// Program to check if an array is perfect
//Given an array arr of size n and you have to tell whether the arr is perfect or not. An array is said to be perfect if its reverse array matches the original array. If the arr is perfect then return True else return False.

#include <iostream>
#include <vector>

using namespace std;

bool is_perfect(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 3, 5, 3, 1};
    cout << is_perfect(arr) << endl;
    return 0;
}