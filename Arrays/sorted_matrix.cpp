// Program to print sorted matrix

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_sorted_matrix(vector<vector<int>> matrix) {
    vector<int> temp;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            temp.push_back(matrix[i][j]);
        }
    }
    sort(temp.begin(), temp.end());
    int k = 0;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            matrix[i][j] = temp[k++];
        }
    }
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {{5, 4, 7}, {1, 3, 8}, {2, 9, 6}};
    print_sorted_matrix(matrix);
    return 0;
}