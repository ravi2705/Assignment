//  Print all Subsets

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void getAllSubsets(vector<int> &nums, vector<int> &subset, int i, vector<vector<int>> &allSubsets) {
        if(i == nums.size()) {
            allSubsets.push_back(subset);
            return;
        }

        // include nums[i]
        subset.push_back(nums[i]);
        getAllSubsets(nums, subset, i + 1, allSubsets);

        // exclude nums[i]
        subset.pop_back();
        getAllSubsets(nums, subset, i + 1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> subset;
        getAllSubsets(nums, subset, 0, allSubsets);
        return allSubsets;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    Solution obj;
    vector<vector<int>> ans = obj.subsets(nums);

    for(auto &subset : ans) {
        for(int x : subset) {
            cout << x << " ";
        }
        cout << "\n";
    }
}
