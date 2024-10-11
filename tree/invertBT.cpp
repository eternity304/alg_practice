#include <iostream>

class TreeNode {
  public:
    // Attributes
    int value;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {} 
};

TreeNode* invertTree(TreeNode* root) {
    if (!root) return nullptr;

    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertTree(root->left);
    invertTree(root->right);

    return root;
}