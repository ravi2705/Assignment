#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;

    if (root == NULL) return ans;

    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);

    vector<int> temp;

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        if (curr == NULL) {
            ans.push_back(temp);
            temp.clear();
            if (!q.empty()) q.push(NULL);
            else break;
        } 
        else {
            temp.push_back(curr->val);
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }

    return ans;
}

int main() {
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<vector<int>> result = levelOrder(root);

    cout << "Level Order Traversal:\n";
    for (auto &level : result) {
        for (int x : level) cout << x << " ";
        cout << endl;
    }

    return 0;
}
