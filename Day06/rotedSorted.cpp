// Search in Rotated Sorted Array
#include <bits/stdc++.h>
using namespace std;

int searchRotated(vector<int>& nums, int target) {
    int st = 0, end = nums.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[st] <= nums[mid]) {
            if (target >= nums[st] && target <= nums[mid])
                end = mid - 1;
            else
                st = mid + 1;
        }

        else {
            if (target >= nums[mid] && target <= nums[end])
                st = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target;

    cout << "Enter target value: ";
    cin >> target;

    int result = searchRotated(nums, target);
    cout << "Index: " << result << endl;

    return 0;
}
