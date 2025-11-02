// Rotating matrix by 90 degrees
#include <bits/stdc++.h>
using namespace std;

void rotate90(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            swap(mat[i][j], mat[j][i]);
    for (int i = 0; i < n; i++)
        reverse(mat[i].begin(), mat[i].end());
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (auto& row : mat) for (auto& x : row) cin >> x;
    rotate90(mat);
    cout << "After rotation:\n";
    for (auto& row : mat) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
    return 0;
}
