#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int c = 0;
    while(n){
        n &= (n-1);
        c++;
    }
    return c;
}

int main(){
    int n = 29;
    cout << countSetBits(n);
}
