#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void getPermutation(vector<int> &nums, int indx, vector<vector<int>> &ans) {
        if(indx == nums.size()) {
            ans.push_back(nums);
            return;
        }
        
        for(int i = indx; i < nums.size(); i++) {
            swap(nums[i], nums[indx]);
            getPermutation(nums, indx + 1, ans);
            swap(nums[i], nums[indx]); // backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPermutation(nums, 0, ans);
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    Solution obj;
    vector<vector<int>> ans = obj.permute(nums);

    for(auto &v : ans) {
        for(int x : v) cout << x << " ";
        cout << "\n";
    }
}
