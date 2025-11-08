// Subsets Using Bitmask
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a={1,2,3};
    int n=a.size();
    for(int mask=0;mask<(1<<n);mask++){
        for(int i=0;i<n;i++)
            if(mask&(1<<i)) cout<<a[i]<<" ";
        cout<<"\n";
    }
}
