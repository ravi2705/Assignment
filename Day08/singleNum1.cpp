// Single Number I

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& a){
    int x=0;
    for(int v:a) x^=v;
    return x;
}

int main(){
    vector<int>a={2,2,1};
    cout<<singleNumber(a);
}
