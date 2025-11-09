#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
vector<int> cur;

void dfs(int i, vector<int>&a, int t){
    if(t==0){
        ans.push_back(cur);
        return;
    }
    for(int j=i;j<a.size();j++){
        if(j>i && a[j]==a[j-1]) continue;
        if(a[j]>t) break;
        cur.push_back(a[j]);
        dfs(j+1,a,t-a[j]);
        cur.pop_back();
    }
}

int main(){
    vector<int>a={10,1,2,7,6,1,5};
    int target=8;
    sort(a.begin(),a.end());
    dfs(0,a,target);
    for(auto &v:ans){
        for(int x:v) cout<<x<<" ";
        cout<<"\n";
    }
}
