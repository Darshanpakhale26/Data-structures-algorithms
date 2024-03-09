// Program to perform preorder traversal of a binary tree

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;                        
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void preorder(TreeNode* root, vector<int>& result) {
    if (root == NULL) {                    // Base case
        return;
    }
    result.push_back(root->val);            // Process the current node
    preorder(root->left, result);           // Traverse the left subtree
    preorder(root->right, result);          // Traverse the right subtree
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> result;
    preorder(root, result);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;  // 1 2 4 5 3 6 7
    return 0;
}