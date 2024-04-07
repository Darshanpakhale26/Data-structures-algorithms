// Program to find all pairs in an array that are symmetric

#include <iostream>
#include <vector>

using namespace std;

void symmetricPairs(vector<vector<int>> arr) {
    vector<vector<int>> result;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) {   // checking if the pairs are symmetric  
                result.push_back({arr[i][0], arr[i][1]});         // adding the symmetric pairs to the result
            }
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << "(" << result[i][0] << ", " << result[i][1] << ")" << endl;
    }
}

int main() {
    vector<vector<int>> arr = {{11, 20}, {30, 40}, {5, 10}, {40, 30}, {10, 5}};
    symmetricPairs(arr);
    return 0;
}