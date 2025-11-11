#include <bits/stdc++.h>
using namespace std;

int findPlatform(vector<int>& arr, vector<int>& dep) {
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i=0, j=0, plat=0, ans=0;
    while(i<arr.size() && j<dep.size()){
        if(arr[i] <= dep[j]){
            plat++, i++;
        } 
        else {
            plat--, 
            j++;
        }
        ans=max(ans,plat);
    }
    return ans;
}

int main(){
    vector<int> arr={900, 940, 950, 1100, 1500, 1800};
    vector<int> dep={910, 1200, 1120, 1130, 1900, 2000};
    cout<<findPlatform(arr,dep);
}
