// Program to count the distinct elements in an array

#include <iostream>
#include <unordered_set>              //including the library for using set
using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set<int> s;             // creating a set
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);             // inserting elements in set
    }
    return s.size();                  // returning the size of set
}

int main()
{
    int arr[] = {15, 12, 13, 12, 13, 13, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Count of distinct elements is " << countDistinct(arr, n);
    return 0;
}