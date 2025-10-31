// Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    int indx = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i - 1] != nums[i]) {
            nums[indx] = nums[i];
            indx++;
        }
    }
    return indx;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
