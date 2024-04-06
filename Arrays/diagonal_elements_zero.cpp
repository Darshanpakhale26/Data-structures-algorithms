// Program to make diagonal elements of a matrix zero


#include <iostream>
#include <vector>

using namespace std;

void makeDiagonalZero(vector<vector<int>> &matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        matrix[i][i] = 0;                    // making the diagonal elements zero
        matrix[i][n - i - 1] = 0;            // making the anti-diagonal elements zero
    }                                                    
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    makeDiagonalZero(matrix);
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
