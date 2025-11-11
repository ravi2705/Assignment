#include <bits/stdc++.h>
using namespace std;

int maxMeetings(vector<int>& start, vector<int>& end) {
    vector<pair<int,int>> a;
    for(int i=0;i<start.size();i++) a.push_back({end[i], start[i]});
    sort(a.begin(), a.end());

    int cnt=1, last=a[0].first;
    for(int i=1;i<a.size();i++){
        if(a[i].second > last){
            cnt++;
            last=a[i].first;
        }
    }
    return cnt;
}

int main(){
    vector<int> s={1,3,0,5,8,5};
    vector<int> e={2,4,6,7,9,9};
    cout<<maxMeetings(s,e);
}
