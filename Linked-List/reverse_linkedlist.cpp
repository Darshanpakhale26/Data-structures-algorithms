// Program to reverse a linked list

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void Insert(int data)          // Inserting a node at the end of the list
{
    Node *temp = new Node();    
    temp->data = data;         // Assigning the data to the new node
    temp->next = NULL;         // As it is the last node, so the next node is NULL
    if (head == NULL)          // If the list is empty, then the new node is the head
    {
        head = temp;           // Assigning the address of the new node to the head
        return;
    }
    Node *temp1 = head;              // Assigning the address of the head to a temporary node
    while (temp1->next != NULL)      // Traversing the list to find the last node
    {
        temp1 = temp1->next;         // Assigning the address of the next node to the temporary node
    }
    temp1->next = temp;             // Assigning the address of the new node to the next of the last node
}

void Print()
{
    Node *temp = head;             // Assigning the address of the head to a temporary node
    while (temp != NULL)           // Traversing the list
    {
        cout << temp->data << " ";       // Printing the data of the current node
        temp = temp->next;             // Assigning the address of the next node to the temporary node
    }
    cout << endl;
}

void Reverse()
{
    Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    cout << "Original List: ";
    Print();
    cout << "Reversed List: ";
    Reverse();
    Print();
    return 0;
}
