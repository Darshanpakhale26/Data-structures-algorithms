// Program to find length of a linked list

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

int length(Node *head)
{
    int count = 0;
    Node *curr = head;          // Create a pointer to the head
    while (curr != NULL)        // Traverse the list and increment the count for each node
    {
        count++;                // Increment the count
        curr = curr->next;      // Move the pointer to the next node
    }
    return count;
}

int main()
{
    Node *head = new Node(10);     // Create a linked list 10->20->30
    head->next = new Node(20);
    head->next->next = new Node(30);
    cout << length(head) << endl;
    return 0;
}