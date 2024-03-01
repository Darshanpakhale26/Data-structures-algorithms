// Program to count the number of pairs with a given sum

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int count_pairs(vector<int> arr, int sum) {
    unordered_set<int> s;
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (s.find(sum - arr[i]) != s.end()) {
            count++;
        }
        s.insert(arr[i]);
    }
    return count;
}

int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    int sum = 6;
    cout << count_pairs(arr, sum);
    return 0;
}