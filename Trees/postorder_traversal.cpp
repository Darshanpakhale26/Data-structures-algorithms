// Program to perform postorder traversal of a binary tree

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;                        
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void postorder(TreeNode* root, vector<int>& result) {
    if (root == NULL) {                    // Base case
        return;
    }
    postorder(root->left, result);          // Traverse the left subtree
    postorder(root->right, result);         // Traverse the right subtree
    result.push_back(root->val);            // Process the current node
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
    postorder(root, result);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;  // 4 5 2 6 7 3 1
    return 0;
}