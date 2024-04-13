// Program to find the maximum perfect square in an array

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int max_perfect_square(vector<int> arr) {
    int max_square = -1;                        // initializing the maximum perfect square
    for (int i = 0; i < arr.size(); i++) {
        int root = sqrt(arr[i]);                // finding the square root of the element
        if (root * root == arr[i]) {             // checking if the element is a perfect square
            max_square = max(max_square, arr[i]); // updating the maximum perfect square
        }
    }
    return max_square;
}

int main() {
    vector<int> arr = {5, 4, 30, 27, 8, 45, 36, 81, 64, 16};
    cout << max_perfect_square(arr) << endl;
    return 0;
}
