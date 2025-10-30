// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n; // handle k > n

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << "Enter number of rotations (k): ";
    cin >> k;

    rotate(nums, k);

    cout << "Array after rotation: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
