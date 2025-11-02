// Printing increasing, decreasing, and both
#include <bits/stdc++.h>
using namespace std;

void printInc(int n) {
    if (n == 0) return;
    printInc(n - 1);
    cout << n << " ";
}

void printDec(int n) {
    if (n == 0) return;
    cout << n << " ";
    printDec(n - 1);
}

void printBoth(int n) {
    if (n == 0) return;
    cout << n << " ";
    printBoth(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Increasing: "; printInc(n); cout << endl;
    cout << "Decreasing: "; printDec(n); cout << endl;
    cout << "Both: "; printBoth(n); cout << endl;
    return 0;
}
