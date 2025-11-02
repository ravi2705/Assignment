// Find pivot index
#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int>& arr) {
    int n = arr.size();
    int total = accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        if (leftSum == total - leftSum - arr[i]) return i;
        leftSum += arr[i];
    }
    return -1;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Pivot Index: " << findPivot(arr) << endl;
    return 0;
}
