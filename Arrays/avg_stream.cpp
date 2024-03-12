// Program to print the avg of elemets with respect to the index

#include <iostream>
#include <vector>

using namespace std;

vector<float> avg_stream(vector<int> arr) {
    int n = arr.size();
    vector<float> res;
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        res.push_back(sum / (i + 1));
    }
    return res;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    vector<float> res = avg_stream(arr);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}