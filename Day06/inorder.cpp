// Inorder Traversal
#include <bits/stdc++.h>
using namespace std;

class TreeeNode {
public:
    int val;
    TreeeNode* left;
    TreeeNode* right;
    TreeeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorder(TreeeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    TreeeNode* root = new TreeeNode(1);
    root->left = new TreeeNode(2);
    root->right = new TreeeNode(3);

    inorder(root);
}
