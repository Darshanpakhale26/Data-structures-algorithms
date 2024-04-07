// // John is a geologist, and he needs to count rock samples in order to send it to a chemical laboratory. He has a problem. 
// The laboratory only accepts rock samples by a range of sizes in ppm (parts per million). 
// John needs your help. Your task is to develop a program to get the number of rocks in each range accepted by the laboratory.

// Problem Statement: Given an array samples[] denoting sizes of rock samples and a 2D array ranges[], the task is to count the rock samples that are in the range ranges[i][0] to ranges[i][1], 
//for every possible 1 <= i <= N.


// Input: samples[] = {5, 1, 4, 5, 2, 4}, ranges[][] = {{2, 4}, {3, 5}}
// Output: 4 3  
// Explanation:
// For the first range {2, 4}: The rock samples in the range {2, 4} are {4, 2, 4, 2}. Therefore, the count is 4.
// For the second range {3, 5}: The rock samples in the range {3, 5} are {4, 5, 4}. Therefore, the count is 3.



#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> countRockSamples(vector<int> samples, vector<vector<int>> ranges) {
    vector<int> result;
    unordered_map<int, int> mp;
    for (int i = 0; i < samples.size(); i++) {
        mp[samples[i]]++;
    }
    for (int i = 0; i < ranges.size(); i++) {
        int count = 0;
        for (int j = ranges[i][0]; j <= ranges[i][1]; j++) {
            count += mp[j];
        }
        result.push_back(count);
    }
    return result;
}

int main() {
    vector<int> samples = { 400, 567, 890, 765, 987 };
    vector<vector<int>> ranges = { { 300, 380 }, 
                                  { 800, 1000 } };
    vector<int> result = countRockSamples(samples, ranges);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}