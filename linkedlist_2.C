#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;   // initially

// Insert at end
void insert(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }
    // till this we just make the box filled with data and null

    Node* temp = head;    // know for insertion aapan 1 loop chalu till it get value null when it get null teva there it inserted the newnode means insert
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at middle (after given value)
void insertMiddle(int value, int afterValue)
{
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    // search for node after which we want to insert
    while (temp != NULL && temp->data != afterValue) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Element not found!" << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete by value
void deleteNode(int value) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    // If first node needs to be deleted
    if (head->data == value) {
        Node* temp = head;  //if 10->20->30->NULL asel tar now head is 10 and temp =10 then
        head = head->next;  // hear means head->next pointing to 20
        delete temp;  // delete 10
        return;  //removed successfully
    }

    // deleting node other than 1

    Node* temp = head;

    // yaha loop chalega jab tak temp ka next null nahi aur next ka data me value na ho
    // forming previousnode ->nodetodelete ->nextnode  to  previousnode ->next->newnode

    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    //if we get end and not found the value at that time this condition occure

    if (temp->next == NULL) {
        cout << "Element not found!" << endl;
        return;
    }

    //core logic

    Node* nodeToDelete = temp->next;    //nodetodelete me ky hai temp ka next means currently temp in 10 hai to next 20 hai delete me
    temp->next = nodeToDelete->next;   //abhi temp ke next me nodetodelete ka next means 30
    delete nodeToDelete;               // delete ky ki 20 kyuki delete term 20 this ase space free kar de uski
}

// Display list
void display() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    insertMiddle(25, 20);   // insert 25 after 20

    cout << "Linked List: ";
    display();

    deleteNode(20);

    cout << "After Deletion: ";
    display();

    return 0;
}

