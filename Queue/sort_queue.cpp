// Program to sort a queue in C++ STL

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void showQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void sortQueue(queue<int> &q)
{
    vector<int> v;
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        q.push(v[i]);
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "The queue is: ";
    showQueue(q);
    sortQueue(q);
    cout << "The sorted queue is: ";
    showQueue(q);
    return 0;
}