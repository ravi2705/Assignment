#include <bits/stdc++.h>
using namespace std;

class TreeeNode {
public:
    int val;
    TreeeNode* left;
    TreeeNode* right;
    TreeeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void preorder(TreeeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    TreeeNode* root = new TreeeNode(1);
    root->left = new TreeeNode(2);
    root->right = new TreeeNode(3);

    preorder(root);
}
