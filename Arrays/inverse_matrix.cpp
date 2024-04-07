// Program to find the inverse of a matrix

#include <iostream>
#include <vector>

using namespace std;

vector<vector<float>> inverseMatrix(vector<vector<float>> &matrix)
{
    int n = matrix.size();
    vector<vector<float>> inverse(n, vector<float>(n));
    vector<vector<float>> adjoint(n, vector<float>(n));
    float determinant = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adjoint[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        determinant += matrix[0][i] * (matrix[1][(i + 1) % n] * matrix[2][(i + 2) % n] - matrix[1][(i + 2) % n] * matrix[2][(i + 1) % n]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inverse[i][j] = adjoint[i][j] / determinant;
        }
    }
    return inverse;
}

int main()
{
    vector<vector<float>> matrix = {{4, 7, 3}, {2, 5, 1}, {6, 8, 9}};
    vector<vector<float>> result = inverseMatrix(matrix);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}