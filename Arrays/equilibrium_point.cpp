// Program to find the equilibrium point
// Equilibrium point is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

#include <iostream>
#include <vector>

using namespace std;

int equilibrium_point(vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];               // Calculate the sum of all elements
    }
    int left_sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum -= arr[i];               // Subtract the element from sum
        if (left_sum == sum) {       // If left_sum is equal to sum, return the element
            return arr[i];
        }
        left_sum += arr[i];          // Add the element to left_sum
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 2, 2};
    cout << equilibrium_point(arr) << endl;
    return 0;
}

