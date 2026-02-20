// double circular linkedlist

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

//Insert at Beginning
void insertAtBeginning(int value)
{
    Node* newNode = new Node{value, NULL, NULL};

    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return;
    }

    Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;

    last->next = newNode;
    head->prev = newNode;

    head = newNode;
}

// Insert at End
void insertAtEnd(int value)
{
    Node* newNode = new Node{value, NULL, NULL};

    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return;
    }

    Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;

    last->next = newNode;
    head->prev = newNode;
}

// Insert After a Value (Middle)
void insertAfterValue(int value, int afterValue)
{
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    do {
        if (temp->data == afterValue)
            break;
        temp = temp->next;
    } while (temp != head);

    if (temp->data != afterValue) {
        cout << "Element not found!" << endl;
        return;
    }

    Node* newNode = new Node{value, NULL, NULL};

    newNode->next = temp->next;
    newNode->prev = temp;

    temp->next->prev = newNode;
    temp->next = newNode;
}

// Delete by Value
void deleteNode(int value)
{
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    do {
        if (temp->data == value)
            break;
        temp = temp->next;
    } while (temp != head);

    if (temp->data != value) {
        cout << "Element not found!" << endl;
        return;
    }

    // Only one node
    if (temp->next == temp) {
        delete temp;
        head = NULL;
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    if (temp == head)
        head = temp->next;

    delete temp;
}

// Forward Traversal
void displayForward()
{
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)" << endl;
}

// Backward Traversal
void displayBackward()
{
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head->prev; // last node

    do {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    } while (temp != head->prev);

    cout << "(back to last)" << endl;
}

int main()
{
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);

    insertAtBeginning(5);
    insertAfterValue(25, 20);

    cout << "Forward: ";
    displayForward();

    cout << "Backward: ";
    displayBackward();

    deleteNode(20);

    cout << "After Deletion: ";
    displayForward();

    return 0;
}

