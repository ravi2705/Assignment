// Missing Number
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a){
    int x=0;
    for(int i=0;i<=a.size();i++) x^=i;
    for(int v:a) x^=v;
    return x;
}

int main(){
    vector<int>a={3,0,1};
    cout<<missingNumber(a);
}
