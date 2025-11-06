// Postorder Traversal

#include <bits/stdc++.h>
using namespace std;

class TreeeNode {
public:
    int val;
    TreeeNode* left;
    TreeeNode* right;
    TreeeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void postorder(TreeeNode* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main() {
    TreeeNode* root = new TreeeNode(1);
    root->left = new TreeeNode(2);
    root->right = new TreeeNode(3);

    postorder(root);
}
