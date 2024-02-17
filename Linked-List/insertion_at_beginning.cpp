// Program to insert a node at the beginning of a linked list

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int x)    //
{
    Node *temp = new Node(x);      // Create a new node
    temp->next = head;             // Point the next of the new node to the head
    return temp;                   // Return the new node as the new head
}

void printList(Node *head)         // Function to print the linked list
{
    Node *curr = head;             // Create a pointer to the head
    while (curr != NULL)           // Traverse the list and print the data of each node
    {
        cout << curr->data << " ";  // Print the data of the current node
        curr = curr->next;          // Move the pointer to the next node
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head, 30);
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    printList(head);
    return 0;
}
