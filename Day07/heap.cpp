#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i) {
    int smallest = i;        // for min-heap
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if(left < n && arr[left] < arr[smallest])
        smallest = left;
        
    if(right < n && arr[right] < arr[smallest])
        smallest = right;
        
    if(smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

vector<int> buildHeap(vector<int> arr, int n) {	
    // Build heap using bottom-up method
    for(int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    return arr;
}
