#include <bits/stdc++.h>
using namespace std;

int longestZeroSumSubarray(vector<int>& arr) {
    unordered_map<int, int> mp; // prefixSum → first index
    int prefixSum = 0;
    int maxLen = 0;

    for(int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        if(prefixSum == 0) {
            maxLen = max(maxLen, i + 1);
        }

        if(mp.find(prefixSum) != mp.end()) {
            maxLen = max(maxLen, i - mp[prefixSum]);
        } else {
            mp[prefixSum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};

    cout << longestZeroSumSubarray(arr);

    return 0;
}
