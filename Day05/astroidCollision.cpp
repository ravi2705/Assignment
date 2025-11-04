#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        vector<int>ans;

        for(int i =0; i<asteroids.size(); i++){
            if(asteroids[i] > 0){
                s.push(asteroids[i]);
            }
            else if(asteroids[i] < 0){
                while (!s.empty() && s.top() > 0 && abs(s.top()) < abs(asteroids[i])) {
                    s.pop();
                }
                if (!s.empty() && s.top() > 0 && abs(s.top()) == abs(asteroids[i])) {
                    s.pop();
                } 
                else if (s.empty() || s.top() < 0) {
                    ans.push_back(asteroids[i]);
                }
            }
        }

        vector<int>temp(s.size());
        for(int i = s.size()-1; i>=0; i--){
            temp[i] = s.top();
            s.pop();
        }
        for(int i = 0; i<temp.size(); i++){
            ans.push_back(temp[i]);
        }
        return ans;
    }

int main(){
    vector<int>asteroids = {3,5,-6,2,-1,4};
    vector<int>ans =  asteroidCollision(asteroids);
    for(int i : ans){
        cout << i << " "; 
    }
}