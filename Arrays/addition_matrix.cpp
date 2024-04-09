// Program to add two matrices

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> add_matrix(vector<vector<int>> &A, vector<vector<int>> &B) {
    int n = A.size();
    int m = A[0].size();
    vector<vector<int>> C(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

int main() {
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> B = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    vector<vector<int>> C = add_matrix(A, B);
    for (int i = 0; i < C.size(); i++) {
        for (int j = 0; j < C[0].size(); j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}