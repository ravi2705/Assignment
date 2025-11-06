#include <bits/stdc++.h>
using namespace std;

class TreeeNode {
public:
    int val;
    TreeeNode *left;
    TreeeNode *right;
    TreeeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeeNode* createBinaryTree(vector<vector<int>>& descriptions) {

    unordered_map<int, TreeeNode*> mp;   
    unordered_set<int> children;         

    for (auto &desc : descriptions) {
        int p = desc[0];
        int c = desc[1];
        int isLeft = desc[2];

        if (!mp[p]) mp[p] = new TreeeNode(p);
        if (!mp[c]) mp[c] = new TreeeNode(c);

        if (isLeft == 1)
            mp[p]->left = mp[c];
        else
            mp[p]->right = mp[c];

        children.insert(c);
    }

    for (auto &desc : descriptions) {
        int p = desc[0];
        if (!children.count(p))
            return mp[p];
    }

    return nullptr;
}

int main() {
    vector<vector<int>> descriptions = {
        {20, 15, 1},
        {20, 17, 0},
        {15, 10, 1}
    };

    TreeeNode* root = createBinaryTree(descriptions);

    // cout << "Root value: " << root->val << endl;

    return 0;
}
