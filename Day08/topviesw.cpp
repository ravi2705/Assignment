#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int v) { data = v; left = right = NULL; }
};

vector<int> topView(Node* root) {
    if(!root) return {};
    map<int,int> mp; 
    queue<pair<Node*,int>> q;
    q.push({root,0});

    while(!q.empty()) {
        auto [node, hd] = q.front();
        q.pop();
        if(mp.find(hd) == mp.end())
            mp[hd] = node->data;

        if(node->left) q.push({node->left, hd-1});
        if(node->right) q.push({node->right, hd+1});
    }

    vector<int> ans;
    for(auto &p : mp) ans.push_back(p.second);
    return ans;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    vector<int> ans = topView(root);
    for(int x : ans) cout << x << " ";
}
