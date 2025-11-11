

#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int sz = flowerbed.size();
    for(int i = 0; i<sz; i++){
        if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == sz-1 || flowerbed[i+1] == 0)){
            flowerbed[i] = 1;
            n--;
            if(n == 0){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int> f={1,0,0,0,1};
    cout<<canPlaceFlowers(f,1);
}