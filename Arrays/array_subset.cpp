// Program to whether a given array is a subset of another array

#include <iostream>
#include <vector>

using namespace std;

bool isSubset(vector<int> &arr1, vector<int> &arr2) {
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            i++;
            j++;
        } else {
            i++;
        }
    }
    return j == m;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {2, 4, 7};
    cout << (isSubset(arr1, arr2) ? "Yes" : "No") << endl;
    return 0;
}


// Another approach to solve this problem is to use the unordered_set data structure.

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isSubset(vector<int> &arr1, vector<int> &arr2) {
    unordered_set<int> s;
    for (int i = 0; i < arr1.size(); i++) {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++) {
        if (s.find(arr2[i]) == s.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {2, 4, 7};
    cout << (isSubset(arr1, arr2) ? "Yes" : "No") << endl;
    return 0;
}
