// Program to find maximum product of two integers in an array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_product(vector<int> arr) {
    sort(arr.begin(), arr.end());                           // sorting the array
    int n = arr.size();
    return arr[n-1] * arr[n-2];                             // returning the maximum product
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << max_product(arr) << endl;
    return 0;
}

// Output: 30


