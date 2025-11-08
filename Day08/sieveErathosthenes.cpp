// Sieve of Eratosthenes

#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n){
    vector<int> prime(n+1,1);
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=n;i++)
        if(prime[i])
            for(int j=i*i;j<=n;j+=i)
                prime[j]=0;
    return prime;
}

int main(){
    vector<int>p=sieve(50);
    for(int i=0;i<=50;i++) if(p[i]) cout<<i<<" ";
}

