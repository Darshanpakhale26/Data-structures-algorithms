// Program to implement stack using linked list

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

class Stack {
    private:
        Node* top;

    public:
        Stack() {
            top = NULL;
        }

        bool isEmpty() {
            if (top == NULL) {
                return true;
            } else {
                return false;
            }
        }

        void push(int val) {
            Node* newNode = new Node();
            newNode->data = val;
            newNode->next = top;
            top = newNode;
        }

        int pop() {
            if (isEmpty()) {
                cout << "Stack Underflow" << endl;
                return 0;
            } else {
                Node* temp = top;
                int popValue = temp->data;
                top = top->next;
                delete temp;
                return popValue;
            }
        }

        int count() {
            int count = 0;
            Node* temp = top;
            while (temp != NULL) {
                count++;
                temp = temp->next;
            }
            return count;
        }

        void display() {
            Node* temp = top;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.display();

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    s.display();

    cout << "Count: " << s.count() << endl;

    return 0;

}


