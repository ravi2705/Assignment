// Check if Array Represents Max Heap
#include <bits/stdc++.h>
using namespace std;

bool isMaxHeap(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i <= (n-2)/2; i++) {
        if(arr[i] < arr[2*i+1]) return false;
        if(2*i+2 < n && arr[i] < arr[2*i+2]) return false;
    }
    return true;
}

int main() {
    vector<int> arr = {90, 15, 10, 7, 12, 2};
    cout << (isMaxHeap(arr) ? "YES" : "NO");
}
