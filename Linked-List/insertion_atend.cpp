// Program to insert a node at the end of a linked list

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

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);          // Create a new node
    if (head == NULL)                  // If the list is empty, return the new node as the head
        return temp;                   
    Node *curr = head;                 // Create a pointer to the head
    while (curr->next != NULL)         // Traverse the list to find the last node
        curr = curr->next;             // Move the pointer to the next node
    curr->next = temp;                 // Point the next of the last node to the new node
    return head;                       // Return the head
}

void printList(Node *head)
{
    Node *curr = head;                 // Create a pointer to the head
    while (curr != NULL)               // Traverse the list and print the data of each node
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    printList(head);
    return 0;
}