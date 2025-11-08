// Check Power of Two
#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
    return n > 0 && (n & (n-1)) == 0;
}

int main(){
    cout << (isPowerOfTwo(16) ? "YES" : "NO");
}
