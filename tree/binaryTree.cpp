#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

// Common Function
// DFS Traversal:
//  - pre order traversal
//  - in order traversal
//  - post order traversal
// BFS Traversal:
//  - level order traversal
// Search:
//  - normal search
//  - bst search

void print(vector<int> arr) {
    for (int num: arr) {
        cout << num << ", ";
    }
    cout << endl;
}

class TreeNode {
  public:
    // Attributes
    int value;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {} 
};

void preOrderTraversal(TreeNode* node) {
    cout << node->value << endl;
    if (node->left) preOrderTraversal(node->left);
    if (node->right) preOrderTraversal(node->right);
}

void inOrderTraversal(TreeNode* node) {
    if (node->left) inOrderTraversal(node->left);
    cout << node->value << endl;
    if (node->right) inOrderTraversal(node->right);
}

void postOrderTraversal(TreeNode* node) {
    if (node->left) postOrderTraversal(node->left);
    if (node->right) postOrderTraversal(node->right);
    cout << node->value << endl;
}

void levelOrderTraversal(TreeNode* node) {
    // BFS has frontier as queue
    queue<TreeNode*> frontier;
    frontier.push(node);

    while (!frontier.empty()) {
        TreeNode* curr = frontier.front();
        frontier.pop();

        cout << curr->value << endl;
        if (curr->left) frontier.push(curr->left);
        if (curr->right) frontier.push(curr->right);
    }
}

bool search(TreeNode* node, int val) {
    if (!node) return false;
    if (node->value == val) return true;
    return search(node->left, val) || search(node->right, val);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(10); 

    cout << "Pre-Order Traversal" << endl;
    preOrderTraversal(root);
    cout << "In-Order Traversal" << endl;
    inOrderTraversal(root);
    cout << "Post-Order Traversal" << endl;
    postOrderTraversal(root);
    cout << "Level-Order Traversal" << endl;
    levelOrderTraversal(root);
    cout << "The value " << 10 << " is in the tree?" << endl;
    cout << search(root, 10) << endl;
    cout << "The value " << 7 << " is in the tree?" << endl;
    cout << search(root, 7) << endl;

    return 0;
}