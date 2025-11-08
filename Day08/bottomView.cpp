#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int v) { data = v; left = right = NULL; }
};

vector<int> bottomView(Node* root) {
    if(!root) return {};
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});

    while(!q.empty()) {
        auto [node, hd] = q.front();
        q.pop();
        mp[hd] = node->data; // overwrite previous to keep bottom-most

        if(node->left) q.push({node->left, hd-1});
        if(node->right) q.push({node->right, hd+1});
    }

    vector<int> ans;
    for(auto &p : mp) ans.push_back(p.second);
    return ans;
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(25);

    vector<int> ans = bottomView(root);
    for(int x : ans) cout << x << " ";
}
