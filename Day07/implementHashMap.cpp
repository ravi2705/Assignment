#include <bits/stdc++.h>
using namespace std;

class MyHashMap {
public:
    vector<int> mp;
    
    MyHashMap() {
        mp.assign(1000001, -1); 
    }
    
    void put(int key, int value) {
        mp[key] = value;
    }
    
    int get(int key) {
        return mp[key];
    }
    
    void remove(int key) {
        mp[key] = -1;
    }
};

int main(){
    MyHashMap hm;
    
    hm.put(1, 10);
    hm.put(2, 20);
    
    cout << hm.get(1) << endl;  
    cout << hm.get(3) << endl;  

    hm.put(2, 25);             
    cout << hm.get(2) << endl; 
    
    hm.remove(2);
    cout << hm.get(2) << endl; 

    return 0;
}
