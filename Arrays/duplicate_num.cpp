// Program to find the duplicates number in an array

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void find_duplicates(vector<int> arr) {
    unordered_map<int, int> map;                // creating a map
    for (int i = 0; i < arr.size(); i++) {
        map[arr[i]]++;                          // inserting elements in map
    }
    for (auto i : map) {                        // iterating through the map
        if (i.second > 1) {                     // if the frequency of an element is greater than 1
            cout << i.first << " ";             // print the element
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6};
    find_duplicates(arr);
    return 0;
}

// Output: 1 2 3 4 5




