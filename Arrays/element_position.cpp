// Find the first and lasrt position of an element in a sorted array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int left = 0;        // left pointer
    int right = nums.size() - 1;   // right pointer
    vector<int> result = {-1, -1};     // result vector
    if(nums.size() == 0) {
        return result;   
    }
    while(left < right) {              
        int mid = left + (right - left) / 2;    
        if(nums[mid] < target) {           
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    if(nums[left] != target) {
        return result;
    }
    result[0] = left;
    right = nums.size() - 1;
    while(left < right) {
        int mid = left + (right - left) / 2 + 1;
        if(nums[mid] > target) {
            right = mid - 1;
        } else {
            left = mid;
        }
    }
    result[1] = right;
    return result;
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = searchRange(nums, target);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
