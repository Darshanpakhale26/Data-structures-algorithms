#include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int non_repeating(vector<int> arr) {
//     unordered_map<int, int> mp;             // Create a map to store the frequency of each elemen
//     for (int i = 0; i < arr.size(); i++) {
//         mp[arr[i]]++;                       // Count the frequency of each element
//     }
//     for (int i = 0; i < arr.size(); i++) {
//         if (mp[arr[i]] == 1) {              // If frequency is 1, return the element
//             return arr[i];
//         }
//     }
//     return -1;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5};
//     cout << non_repeating(arr) << endl;
//     return 0;
// }