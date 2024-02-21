// Program to demonstrate the use of queue in C++ STL

#include <iostream>
#include <queue>          // include the queue library
using namespace std;

int main() {
    queue<int> q;          // create a queue of integers

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "The queue is: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}