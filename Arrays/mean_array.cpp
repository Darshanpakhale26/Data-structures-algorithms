// Program to find the mean of an array

#include <iostream>
#include <vector>

using namespace std;

float meanArray(vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];                  // calculating the sum of all elements
    }
    return (float)sum / arr.size();     // returning the mean
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << meanArray(arr) << endl;
    return 0;
}