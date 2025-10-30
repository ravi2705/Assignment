// Removing Minimum and Maximum From Array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIdx = 0, maxIdx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIdx]) minIdx = i;
            if (nums[i] > nums[maxIdx]) maxIdx = i;
        }
        if (minIdx > maxIdx) swap(minIdx, maxIdx);
        int front = maxIdx + 1;
        int back = n - minIdx;
        int both = (minIdx + 1) + (n - maxIdx);
        return min({front, back, both});
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 10, 7, 5, 4, 1, 8, 6};

    cout << "Minimum deletions required: " << sol.minimumDeletions(nums) << endl;

    return 0;
}
