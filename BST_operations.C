#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create node
Node* createNode(int value) {
    Node* n = new Node;
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// Insert in BST
Node* insert(Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Inorder Traversal (Sorted Output)
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Search in BST
void search(Node* root, int key) {
    if (root == NULL) {
        cout << "Not found\n";
        return;
    }

    if (root->data == key) {
        cout << key << " found\n";
        return;
    }

    if (key < root->data)
        search(root->left, key);
    else
        search(root->right, key);
}

// Find minimum value (used in deletion)
Node* findMin(Node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Delete node in BST
Node* deleteNode(Node* root, int key) {
    if (root == NULL) 
	    return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        // Case 2: One child
        else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        else {
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

// Height
int height(Node* root) {
    if (root == NULL)
        return 0;

    int l = height(root->left);
    int r = height(root->right);

    if (l > r)
        return l + 1;
    else
        return r + 1;
}


int main() {
    Node* root = NULL;

    // Insert values
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 15);

    cout << "BST (Inorder): ";
    inorder(root);   // Sorted output
    cout << endl;

    // Search
    search(root, 15);

    // Height
    cout << "Height: " << height(root) << endl;

    // Delete
    root = deleteNode(root, 10);

    cout << "After deleting 10: ";
    inorder(root);
    cout << endl;

    return 0;
}

