// Counting Bits (DP)
#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n){
    vector<int> dp(n+1, 0);
    for(int i=1;i<=n;i++)
        dp[i] = dp[i>>1] + (i&1);
    return dp;
}

int main(){
    vector<int> ans = countBits(10);
    for(int x: ans) cout << x << " ";
}
