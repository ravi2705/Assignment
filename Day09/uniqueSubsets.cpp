#include <bits/stdc++.h>
using namespace std;

void solve(int i, vector<int>&a, vector<int>&cur){
    cout<<""; 
}

void dfs(int i, vector<int>& a, vector<int>& cur){
    for(int x:cur) cout<<x<<" ";
    cout<<"\n";
    for(int j=i;j<a.size();j++){
        if(j>i && a[j]==a[j-1]) continue;
        cur.push_back(a[j]);
        dfs(j+1,a,cur);
        cur.pop_back();
    }
}

int main(){
    vector<int>a={1,2,2};
    sort(a.begin(),a.end());
    vector<int>cur;
    dfs(0,a,cur);
}
