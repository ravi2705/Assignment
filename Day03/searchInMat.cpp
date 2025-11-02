// Searching element in a matrix
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
    vector<int> res;
    int top = 0, left = 0, bottom = mat.size() - 1, right = mat[0].size() - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) res.push_back(mat[top][i]);
        top++;
        for (int i = top; i <= bottom; i++) res.push_back(mat[i][right]);
        right--;
        if (top <= bottom)
            for (int i = right; i >= left; i--) res.push_back(mat[bottom][i]);
        bottom--;
        if (left <= right)
            for (int i = bottom; i >= top; i--) res.push_back(mat[i][left]);
        left++;
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (auto& row : mat) for (auto& x : row) cin >> x;
    vector<int> ans = spiralOrder(mat);
    for (int x : ans) cout << x << " ";
    return 0;
}
