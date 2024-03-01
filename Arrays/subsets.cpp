// Program to find all subsets of a array

#include <iostream>
#include <vector>
using namespace std;

void find_subsets(vector<int> &arr, vector<int> &subset, int index) {
    if (index == arr.size()) {                        // base case when index reaches the end of the array 
        for (int i = 0; i < subset.size(); i++) {     // printing the subset
            cout << subset[i] << " ";
        }
        cout << endl;
        return;
    }
    subset.push_back(arr[index]);               // including the current element in the subset
    find_subsets(arr, subset, index + 1);       // recursive call to include the next element
    subset.pop_back();                         // excluding the current element from the subset
    find_subsets(arr, subset, index + 1);      // recursive call to exclude the next element
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> subset;
    find_subsets(arr, subset, 0);
    return 0;
}


