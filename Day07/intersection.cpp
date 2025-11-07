#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s(nums1.begin(), nums1.end());
    unordered_set<int> res;

    for(int x : nums2) {
        if(s.find(x) != s.end()) {
            res.insert(x);
        }
    }

    return vector<int>(res.begin(), res.end());
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> ans = intersection(nums1, nums2);

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}
