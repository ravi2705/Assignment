// Search in Rotated Sorted Array II

#include <bits/stdc++.h>
using namespace std;

bool searchRotated(vector<int>& nums, int target) {
    int st = 0, end = nums.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target)
            return true;

        if (nums[st] == nums[mid] && nums[mid] == nums[end]) {
            st++;
            end--;
        }
        else if (nums[st] <= nums[mid]) {
            if (target >= nums[st] && target < nums[mid])
                end = mid - 1;
            else
                st = mid + 1;
        }
        else {
            if (target > nums[mid] && target <= nums[end])
                st = mid + 1;
            else
                end = mid - 1;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {4,5,6,6,7,0,1,2,4,4};
    int target;
    cout << "Enter target: ";
    cin >> target;

    if (searchRotated(nums, target))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}
