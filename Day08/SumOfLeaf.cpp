// Sum of Leaf Nodes in Binary Tree
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int v) { data = v; left = right = NULL; }
};

int sumOfLeaves(Node* root) {
    if(!root) return 0;
    if(!root->left && !root->right) return root->data;
    return sumOfLeaves(root->left) + sumOfLeaves(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);

    cout << sumOfLeaves(root);
}
