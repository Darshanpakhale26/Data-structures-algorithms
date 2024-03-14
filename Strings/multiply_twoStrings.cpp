// Program to multiply two strings  


#include <iostream>
#include <string>
#include <vector>

using namespace std;

string multiply(string num1, string num2) {
    int n = num1.size();
    int m = num2.size();
    vector<int> result(n + m, 0);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = mul + result[p2];
            result[p1] += sum / 10;
            result[p2] = sum % 10;
        }
    }
    string s;
    for (int p : result) {
        if (!s.empty() || p != 0) {
            s.push_back(p + '0');
        }
    }
    return s.empty() ? "0" : s;
}

int main() {
    string num1 = "123";
    string num2 = "456";
    cout << multiply(num1, num2) << endl;
    return 0;
}