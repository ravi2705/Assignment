// Check Power of Four
#include <bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n){
    return n > 0 && (n & (n-1)) == 0 && (n & 0x55555555);
}

int main(){
    cout << (isPowerOfFour(16) ? "YES" : "NO");
}
