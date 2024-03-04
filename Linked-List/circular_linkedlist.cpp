// Program to check if a linked list is circular or not

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

void Insert(int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        return;
    }
    Node* temp1 = head;
    while (temp1->next != NULL) {
        temp1 = temp1->next;
    }
    temp1->next = temp;
}

bool IsCircular() {
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
        if (temp == head) {
            return true;
        }
    }
    return false;
}

int main() {
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    cout << IsCircular() << endl;
    return 0;
}