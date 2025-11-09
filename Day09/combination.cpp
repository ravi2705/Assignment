#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
vector<int> cur;

void dfs(int i,int n,int k){
    if(cur.size()==k){
        ans.push_back(cur);
        return;
    }
    for(int x=i;x<=n;x++){
        cur.push_back(x);
        dfs(x+1,n,k);
        cur.pop_back();
    }
}

int main(){
    dfs(1,5,3);
    for(auto &v:ans){
        for(int x:v) cout<<x<<" ";
        cout<<"\n";
    }
}
