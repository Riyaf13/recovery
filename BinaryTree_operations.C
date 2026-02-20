#include <iostream>
using namespace std;

// Node structure
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

// Display tree (Preorder)
void display(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    display(root->left);
    display(root->right);
}

// Search
void search(Node* root, int key) {
    if (root == NULL) return;

    if (root->data == key) {
        cout << key << " found in tree\n";
        return;
    }

    search(root->left, key);
    search(root->right, key);
}

// Find height
int height(Node* root) 
{ 
	if (root == NULL) return 0; 
	int left = height(root->left); 
	int right = height(root->right); 
	if (left > right) 
		return left + 1; 
	else 
		return right + 1;
}
// Delete leaf node
void deleteNode(Node* root, int value) {
    if (root == NULL) return;

    // delete left leaf
    if (root->left && root->left->data == value &&
        root->left->left == NULL && root->left->right == NULL) {
        delete root->left;
        root->left = NULL;
        return;
    }

    // delete right leaf
    if (root->right && root->right->data == value &&
        root->right->left == NULL && root->right->right == NULL) {
        delete root->right;
        root->right = NULL;
        return;
    }

    deleteNode(root->left, value);
    deleteNode(root->right, value);
}

int main() {

    // Build tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "Tree: ";
    display(root);
    cout << endl;

    // Search
    search(root, 5);

    // Height
    cout << "Height: " << height(root) << endl;

    // Delete node
    deleteNode(root, 5);

    cout << "After deleting 5: ";
    display(root);
    cout << endl;

    return 0;
}

