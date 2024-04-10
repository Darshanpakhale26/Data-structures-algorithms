// Progam to Rearrange an array

#include <iostream>
#include <vector>

using namespace std;

void rearrange(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];            
    }
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] = temp[right--];
        } else {
            arr[i] = temp[left++];
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};     
    rearrange(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
