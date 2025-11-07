#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) {
        return false;
    }
    unordered_map<char, int> mp;

    for(char c : s) {
        mp[c]++;
    }

    for(char c : t) {
        if(mp.find(c) == mp.end() || mp[c] == 0) {
            return false;
        }
        mp[c]--;
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    if(isAnagram(s, t))
        cout << "True";
    else
        cout << "False";

    return 0;
}
