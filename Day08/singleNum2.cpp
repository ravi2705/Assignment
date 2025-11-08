// Single Number II
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& a){
    int ones=0, twos=0;
    for(int x : a){
        ones = (ones^x) & ~twos;
        twos = (twos^x) & ~ones;
    }
    return ones;
}

int main(){
    vector<int>a={2,2,3,2};
    cout<<singleNumber(a);
}
