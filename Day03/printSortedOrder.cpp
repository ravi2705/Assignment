// Printing elements in sorted order
#include <bits/stdc++.h>
using namespace std;

void printSorted(vector<vector<int>>& mat) {
    vector<int> v;
    for (auto& row : mat)
        for (int x : row)
            v.push_back(x);
    sort(v.begin(), v.end());
    for (int x : v) cout << x << " ";
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (auto& row : mat) for (auto& x : row) cin >> x;
    printSorted(mat);
    return 0;
}
