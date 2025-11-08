// Top K Frequent Elements
#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freq;
    for(int x : nums) freq[x]++;

    priority_queue<pair<int,int>> pq;
    for(auto &it : freq) pq.push({it.second, it.first});

    vector<int> ans;
    while(k--) {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> ans = topKFrequent(nums, k);
    for(int x : ans) cout << x << " ";
}
