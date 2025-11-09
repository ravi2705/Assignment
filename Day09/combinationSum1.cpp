#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
vector<int> cur;

void dfs(int i, vector<int>&a, int t){
    if(t==0){
        ans.push_back(cur);
        return;
    }
    if(i==a.size()||t<0) return;

    cur.push_back(a[i]);
    dfs(i,a,t-a[i]);
    cur.pop_back();
    dfs(i+1,a,t);
}

int main(){
    vector<int>a={2,3,6,7};
    int target=7;
    dfs(0,a,target);
    for(auto &v:ans){
        for(int x:v) cout<<x<<" ";
        cout<<"\n";
    }
}
