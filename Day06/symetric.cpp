#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isMirrorTree(TreeNode* p, TreeNode* q) {
    if (p == NULL || q == NULL)
        return p == q; // both NULL -> true, one NULL -> false

    bool leftMirror = isMirrorTree(p->left, q->right);
    bool rightMirror = isMirrorTree(p->right, q->left);

    return leftMirror && rightMirror && (p->val == q->val);
}

bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    return isMirrorTree(root->left, root->right);
}

int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->right->right = new TreeNode(3);

    if (isSymmetric(root))
        cout << "Tree is Symmetric\n";
    else
        cout << "Tree is Not Symmetric\n";

    return 0;
}
