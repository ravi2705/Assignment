// Running Sum of 1d Array

#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        sum += nums[i];
        nums[i] = sum;
    }
    return nums;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    vector<int> result = runningSum(nums);

    cout << "Running Sum: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
