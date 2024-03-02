// Program for union of two arrays

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> union_array(vector<int> &arr1, vector<int> &arr2) {
    unordered_set<int> s;  // Create an empty set
    for (int i = 0; i < arr1.size(); i++) {
        s.insert(arr1[i]);  // Insert all the elements of arr1 into the set
    }
    for (int i = 0; i < arr2.size(); i++) {
        s.insert(arr2[i]);  // Insert all the elements of arr2 into the set
    }
    vector<int> res(s.begin(), s.end());  // Convert the set into a vector
    return res;
}

int main() {
    vector<int> arr1 = {1, 2, 4, 5, 6};
    vector<int> arr2 = {2, 3, 5, 7};
    vector<int> res = union_array(arr1, arr2);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}