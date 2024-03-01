// Program to check if a given array  is a subset of another array

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool is_subset(vector<int> arr1, vector<int> arr2) {
    unordered_set<int> s;
    for (int i = 0; i < arr1.size(); i++) {
        s.insert(arr1[i]);              // inserting all elements of arr1 into set
    }
    for (int i = 0; i < arr2.size(); i++) {
        if (s.find(arr2[i]) == s.end()) {   // checking if the element is present in set
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr1 = {11, 1, 13, 21, 3, 7};
    vector<int> arr2 = {11, 6, 7, 1};
    cout << is_subset(arr1, arr2);
    return 0;
}