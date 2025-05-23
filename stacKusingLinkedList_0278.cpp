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
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. set the next pointer of the new node
        top = newNode;              // 4. update the top pointer into the new node
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
        top = top->next;  // update the top pointer to the next node
        cout << "Popped value: " << temp->data << endl;
        delete temp;
    }

    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // retrunt the value of the top node
    }
    // is empty operation, check is the stack empty
    bool isEmpty()
    {
        return top == NULL; // return the if too pointer us null.indicate an empty stack
    }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the valuse to push: ";
            cin >> value;
            stack.push(value); // push the entered value onto the stack
            break;
        }
    }
}