#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<pair<int,int>>s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }else{
            int minVal = min(s.top().second, val);
            s.push({val,minVal});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

int main(){
    MinStack m;
    m.push(5);
    m.push(50);
    m.push(74);
    m.push(85);
    m.push(9);

    cout << m.top();
    cout << m.getMin();

}