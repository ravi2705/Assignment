#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(), first, sec;
        vector<int>ans;
        unordered_map<int, int>m;
        for(int i=0; i<n; i++){
            first = nums[i];
            sec = target - first;
            if(m.find(sec) != m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first] = i;
        }
        return ans;
    }        

int main(){
    vector<int>nums = {1,2,3,4,5,6};
    int target = 9;
    vector<int>ans = twoSum(nums,target);

    for(int num : ans){
        cout << num << " ";
    }
    return 0;
}