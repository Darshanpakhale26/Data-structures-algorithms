// Program to check if an array is sorted

#include <iostream>
#include <vector>

using namespace std;

bool is_sorted(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << is_sorted(arr) << endl;
    return 0;
}

// Another approach is to use the is_sorted() function from the algorithm library. Here is the code snippet:

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     cout << is_sorted(arr.begin(), arr.end()) << endl;
//     return 0;
// }

