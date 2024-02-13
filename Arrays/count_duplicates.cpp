// Program to count the number of duplicates in an array

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int count_duplicates(vector<int> arr) {
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++) {
        map[arr[i]]++;                       // inserting elements in map
    }
    int count = 0;
    for (auto i : map) {                     // iterating through the map
        if (i.second > 1) {                  // if the frequency of an element is greater than 1
            count++;                         // increment the count
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6};
    cout << count_duplicates(arr) << endl;
    return 0;
}