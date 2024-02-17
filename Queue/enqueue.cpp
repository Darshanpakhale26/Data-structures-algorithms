// Program implement enqueue operation of a queue

#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int cap, size, front;
    Queue(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        arr = new int[cap];
    }

    void enqueue(int x)
    {
        if (size == cap)
            return;
        int rear = (front + size) % cap;
        arr[rear] = x;
        size++;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    for (int i = 0; i < q.size; i++)
        cout << q.arr[i] << " ";
    return 0;
}