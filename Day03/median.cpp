// Finding median in a row-wise sorted matrix
#include <bits/stdc++.h>
using namespace std;

int matrixMedian(vector<vector<int>>& mat) {
    vector<int> v;
    for (auto& row : mat)
        v.insert(v.end(), row.begin(), row.end());
    sort(v.begin(), v.end());
    return v[v.size() / 2];
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (auto& row : mat) for (auto& x : row) cin >> x;
    cout << "Median = " << matrixMedian(mat) << endl;
    return 0;
}
