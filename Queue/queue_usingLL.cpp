// Program to implement Queue using Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Queue
{
public:
    Node *front, *rear;
    int size;
    Queue()
    {
        front = rear = NULL;
        size = 0;
    }

    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
        size++;
    }

    int dequeue()
    {
        if (front == NULL)
            return -1;
        int res = front->data;
        Node *temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
        size--;
        return res;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
}