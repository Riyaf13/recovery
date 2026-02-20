//circular single linkedlist 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at Beginning
void insertAtBeginning(int value)
{
    Node* newNode = new Node;
    newNode->data = value;

    // If list is empty
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;

    // Go to last node
    while (temp->next != head)
        temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

// Insert at End
void insertAtEnd(int value)
{
    Node* newNode = new Node;
    newNode->data = value;

    // If empty
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;

    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}
// insert at middle 
void insertAfterValue(int value, int afterValue)
{
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    // Search for the node
    do {
        if (temp->data == afterValue)
            break;
        temp = temp->next;
    } while (temp != head);

    // If value not found
    if (temp->data != afterValue) {
        cout << "Element not found!" << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;

    newNode->next = temp->next;
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
    Node* prev = NULL;

    // If head is to be deleted
    if (head->data == value) {

        // Only one node
        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        // Find last node
        while (temp->next != head)
            temp = temp->next;

        Node* toDelete = head;
        head = head->next;
        temp->next = head;
        delete toDelete;
        return;
    }

    prev = head;
    temp = head->next;

    while (temp != head && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == head) {
        cout << "Element not found!" << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}

// Traversal
void display()
{
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)" << endl;
}

int main()
{
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);

    cout << "Circular Linked List: ";
    display();

    insertAtBeginning(5);
    cout << "After inserting at beginning: ";
    display();

    deleteNode(20);
    cout << "After deletion: ";
    display();

    return 0;
}

