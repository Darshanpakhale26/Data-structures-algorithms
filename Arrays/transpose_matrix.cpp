// Program to print the transpose of a matrix

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> result(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> result = transpose(matrix);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}