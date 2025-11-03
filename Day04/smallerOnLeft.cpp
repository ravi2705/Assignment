// Smaller On left

#include <bits/stdc++.h>
using namespace std;

vector<int> greatestSmallerOnLeft(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    set<int> s;

    for (int i = 0; i < n; i++) {
        auto it = s.lower_bound(arr[i]);
        if (it != s.begin()) {
            it--;
            ans[i] = *it;
        }
        s.insert(arr[i]);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> result = greatestSmallerOnLeft(arr);
    for (int val : result) cout << val << " ";
    cout << endl;
    return 0;
}
