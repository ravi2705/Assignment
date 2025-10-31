#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    // Moore's Voting Algorithm
    int freq = 0, ans = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            ans = nums[i];
        }
        if (ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
