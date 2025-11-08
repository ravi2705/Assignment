// Kth Smallest Element (Min Heap)
#include <bits/stdc++.h>
using namespace std;

int findKthSmallest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
    while(--k) pq.pop();
    return pq.top();
}

int main() {
    vector<int> nums = {7,10,4,3,20,15};
    int k = 3;
    cout << findKthSmallest(nums, k);
}
