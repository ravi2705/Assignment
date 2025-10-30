// Reverse The Array
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr) {
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    reverseArray(arr);

    cout << "Reversed array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
