// PRogram to reverse a queue

#include <iostream>
#include <queue>
using namespace std;

void reverse(queue<int> &q)
{
    if (q.empty())
        return;
    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverse(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}