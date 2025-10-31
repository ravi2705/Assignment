// Find Pivot Index
#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i; 
        }
        leftSum += nums[i];
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "Pivot Index: " << pivotIndex(nums) << endl;

    vector<int> nums2 = {1, 2, 3};
    cout << "Pivot Index: " << pivotIndex(nums2) << endl;

    vector<int> nums3 = {2, 1, -1};
    cout << "Pivot Index: " << pivotIndex(nums3) << endl;

    return 0;
}
