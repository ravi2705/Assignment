// Maximum Product Subarray
#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int maxProd = nums[0];
    int currMax = nums[0];
    int currMin = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0) {
            swap(currMax, currMin);
        }

        // Update current max and min
        currMax = max(nums[i], currMax * nums[i]);
        currMin = min(nums[i], currMin * nums[i]);

        // Update global max
        maxProd = max(maxProd, currMax);
    }

    return maxProd;
}

int main() {
    vector<int> nums = {2, 3, -2, 4};
    cout << "Maximum Product Subarray: " << maxProduct(nums) << endl;

    return 0;
}
