#include <iostream>

using namespace std;

// Node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// Stack class
class stack
{
    Node *top; // Pointer to the top node of the stack

public:
    stack()
    {
        top = NULL; // Intialize the stack with a null top pointer
    }

    // Push operation Insert an element onto the top of the stack
    int push(int value) // operasi push
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    void pop() // pop operation: remove top most element from the stack
    {
        if (isEmpty())
        {
            cout << "Stuck is empty." << endl;
        }

        Node *temp = top; // create temporary pointer
        top = top->next; // update the top pointer to the next node
        cout << "Popped value: " << top->data << endl;
    }
}

