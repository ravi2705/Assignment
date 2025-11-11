// Assign Cookies (LeetCode 455)

#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0, j = 0, cnt = 0;
    while(i < g.size() && j < s.size()) {
        if(s[j] >= g[i]) { cnt++; i++; j++; }
        else j++;
    }
    return cnt;
}

int main(){
    vector<int> g={1,2,3}, s={1,1};
    cout<<findContentChildren(g,s);
}
