//  Modular Exponentiation
#include <bits/stdc++.h>
using namespace std;

long long modExp(long long a,long long b,long long m){
    long long r=1;
    while(b){
        if(b&1) r=(r*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return r;
}

int main(){
    cout<<modExp(2,10,1e9+7);
}
