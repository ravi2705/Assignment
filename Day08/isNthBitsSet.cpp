// Check if Nth Bit is Set
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5, k = 2;
    if(n & (1 << k)) cout << "SET";
    else cout << "NOT SET";
}
