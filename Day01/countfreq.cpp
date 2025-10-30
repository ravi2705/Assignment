//count frequency
#include <bits/stdc++.h>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> freq;
    int maxFreq = 0;

    // Count frequency of each element
    for (int x : nums) {
        freq[x]++;
        maxFreq = max(maxFreq, freq[x]);
    }

    int total = 0;
    // Count total occurrences of elements having max frequency
    for (auto& p : freq) {
        if (p.second == maxFreq)
            total += p.second;
    }

    return total;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 1, 4};
    cout << "Output: " << maxFrequencyElements(nums) << endl;

    return 0;
}
