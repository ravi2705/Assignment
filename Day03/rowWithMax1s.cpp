// Identifying row with maximum 1s
#include <bits/stdc++.h>
using namespace std;

int rowWithMaxOnes(vector<vector<int>>& mat) {
    int maxCount = 0, rowIndex = -1;
    for (int i = 0; i < mat.size(); i++) {
        int count = count_if(mat[i].begin(), mat[i].end(), [](int x){ return x == 1; });
        if (count > maxCount) {
            maxCount = count;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (auto& row : mat) for (auto& x : row) cin >> x;
    cout << "Row with maximum 1s: " << rowWithMaxOnes(mat) << endl;
    return 0;
}
