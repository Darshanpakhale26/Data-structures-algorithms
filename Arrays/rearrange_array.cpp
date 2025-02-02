// // Progam to Rearrange an array

// #include <iostream>
// #include <vector>

// using namespace std;

// void rearrange(vector<int> &arr) {
//     int n = arr.size();
//     vector<int> temp(n);
//     for (int i = 0; i < n; i++) {
//         temp[i] = arr[i];            
//     }
//     int left = 0, right = n - 1;
//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) {
//             arr[i] = temp[right--];
//         } else {
//             arr[i] = temp[left++];
//         }
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};     
//     rearrange(arr);
//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// First three elements are in ascending order and the next three elements are in descending order.

#include <iostream>
#include<algorithm>
#include <vector>


using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for(int i=0; i<=n/2;i++){
        cout<<arr[i]<<" ";

    }
    for(int i=n-1; i>n/2;i--){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
