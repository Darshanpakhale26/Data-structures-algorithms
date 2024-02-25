// Selection sort algorithm
// Time complexity: O(n^2)
// Space complexity: O(1)


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selection_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {             // n-1 because the last element will be sorted automatically
        
        int min_index = i;                      // assume the first element is the minimum
        for (int j = i+1; j < n; j++) {         
            if (arr[j] < arr[min_index]) {      // if we find a smaller element, update the min_index
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);           // swap the minimum element with the first element
    } 
}   
int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selection_sort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}



