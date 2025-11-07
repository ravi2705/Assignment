#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    vector<int> ans;

    for(int i = 0; i < nums.size(); i++) {
        int first = nums[i];
        int sec = target - first;

        if(mp.find(sec) != mp.end()) {
            ans.push_back(mp[sec]); 
            ans.push_back(i);    
            return ans;
        }

        mp[first] = i;
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if(!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}
