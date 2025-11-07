#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int,int> mp;
    mp[0] = -1;

    int prefixSum = 0;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] == 1) prefixSum += 1;
        else prefixSum -= 1;

        if(mp.count(prefixSum)) {
            ans = max(ans, i - mp[prefixSum]);
        } else {
            mp[prefixSum] = i;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {0, 1, 0, 1, 1, 0};
    
    cout << findMaxLength(nums);

    return 0;
}
