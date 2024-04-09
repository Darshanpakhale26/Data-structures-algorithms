// Program to count the frequency of each element in an array

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void count_frequency(vector<int> arr) {
    unordered_map<int, int> freq;
    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;                                
    }
    for (auto x : freq) {                             // Iterate through the map.
        cout << x.first << " " << x.second << endl;   // Print the frequency of each element.
    }
}

int main() {
    vector<int> arr = {1, 3, 5, 3, 1};
    count_frequency(arr);
    return 0;
}