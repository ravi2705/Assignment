#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

bool helper(TreeNode* root, long long minRng, long long maxRng) {
    if(root == NULL) return true;

    if(root->data <= minRng || root->data >= maxRng)
        return false;

    return helper(root->left, minRng, root->data) &&
           helper(root->right, root->data, maxRng);
}

bool isValidBST(TreeNode* root) {
    return helper(root, LLONG_MIN, LLONG_MAX);
}

int main() {

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    if(isValidBST(root))
        cout << "Valid BST";
    else
        cout << "Not a valid BST";

    return 0;
}
