// Given an integer array nums, find the subarray with the largest sum, and return its sum.
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int crrsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        crrsum += nums[i];
        maxsum = max(crrsum, maxsum);

        if (crrsum < 0) {
            crrsum = 0;
        }
    }

    return maxsum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
