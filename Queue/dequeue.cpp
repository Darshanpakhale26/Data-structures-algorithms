// Program to implement dequeue operation of a queue

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
        int rear = (front + size) % cap;               // Calculate the rear pointer
        arr[rear] = x;                                 // Insert the element at the rear
        size++;
    }

    int dequeue()
    {
        if (size == 0)                // If the queue is empty, return -1
            return -1;
        int res = arr[front];
        front = (front + 1) % cap;    // Move the front pointer to the next node
        size--;                       // Decrement the size
        return res;
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
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    

}