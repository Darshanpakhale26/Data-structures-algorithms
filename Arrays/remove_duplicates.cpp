// Program to remove duplicates from an array

// #include <iostream>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// vector<int> remove_duplicates(vector<int> arr) {
//     unordered_map<int, int> map;                // creating a map
//     for (int i = 0; i < arr.size(); i++) {
//         map[arr[i]]++;                          // inserting elements in map
//     }
//     vector<int> res;
//     for (auto i : map) {                        // iterating through the map
//         res.push_back(i.first);                 // inserting the elements in the result vector
//     }
//     return res;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6};
//     vector<int> res = remove_duplicates(arr);
//     for (auto i : res) {
//         cout << i << " ";
//     }
//     return 0;
// }

// time complexity of this code is O(n) where n is the number of elements in the array

// Using set

// #include <iostream>
// #include <set>
// #include <vector>

// using namespace std;

// vector<int> remove_duplicates(vector<int> arr) {
//     set<int> s;                                 // creating a set
//     for (int i = 0; i < arr.size(); i++) {
//         s.insert(arr[i]);                       // inserting elements in set
//     }
//     vector<int> res(s.begin(), s.end());        // converting set to vector
//     return res;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6};
//     vector<int> res = remove_duplicates(arr);
//     for (auto i : res) {
//         cout << i << " ";
//     }
//     return 0;
// }

//time complexity of this code is O(n) where n is the number of elements in the array


#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {  // if the elements are not equal
      i++;                   // increment i
      arr[i] = arr[j];       // assign the value of arr[j] to arr[i]
    }
  }
  return i + 1;              // return the length of the array
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}