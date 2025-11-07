#include <bits/stdc++.h>
using namespace std;

class Geeks {
public:

    // Function to insert element into the queue
    static void insert(priority_queue<int> &q, int k) {
        q.push(k);
    }

    // Function to find an element k
    static bool find(priority_queue<int> q, int k) {
        // iterate through the queue (use a copy)
        while(!q.empty()) {
            if(q.top() == k)
                return true;
            q.pop();
        }
        return false;
    }

    // Function to delete the max element from queue
    static int deleteMax(priority_queue<int> &q) {
        if(q.empty()) return -1;   
        
        int mx = q.top();
        q.pop();
        return mx;
    }
};
