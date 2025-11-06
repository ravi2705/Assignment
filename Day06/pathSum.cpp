#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;

    targetSum -= root->val;

    // If leaf node:
    if (!root->left && !root->right)
        return (targetSum == 0);

    return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
}

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    int targetSum = 22;

    if (hasPathSum(root, targetSum))
        cout << "Path Exists\n";
    else
        cout << "No Path Exists\n";

    return 0;
}
