#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;  // initially

// Insert at Beginning
void insertAtBeginning(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

// Insert at End
void insertAtEnd(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete by Value
void deleteNode(int value)
{
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    // If head node is to be deleted
    if (temp->data == value) {
        head = temp->next;

        if (head != NULL)
            head->prev = NULL;

        delete temp;
        return;
    }

    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Element not found!" << endl;
        return;
    }

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    delete temp;
}

// Forward Traversal
void displayForward()
{
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

//  Backward Traversal
void displayBackward()
{
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    // Move to last node
    while (temp->next != NULL)
        temp = temp->next;

    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

int main()
{
    insertAtBeginning(20);
    insertAtBeginning(10);
    insertAtEnd(30);
    insertAtEnd(40);

    cout << "Forward Traversal: ";
    displayForward();

    cout << "Backward Traversal: ";
    displayBackward();

    deleteNode(30);

    cout << "After Deletion: ";
    displayForward();

    return 0;
}

