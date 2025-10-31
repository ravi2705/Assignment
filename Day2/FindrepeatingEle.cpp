//Problem Statement: Find all the repeating elements present in an array.

#include <bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int>& arr) {
    unordered_map<int, int> freq;

   
    for (int num : arr) {
        freq[num]++;
    }

    bool found = false;
    cout << "Repeating elements: ";
    for (auto it : freq) {
        if (it.second > 1) {
            cout << it.first << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 4, 4, 5, 2};
    findRepeatingElements(arr);

    return 0;
}
