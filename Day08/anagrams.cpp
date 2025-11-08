#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> ans, freq(26,0), window(26,0);
    if(s.size() < p.size()) return ans;

    for(char c : p) freq[c-'a']++;

    int k = p.size();
    for(int i = 0; i < s.size(); i++) {
        window[s[i]-'a']++;
        if(i >= k) window[s[i-k]-'a']--;
        if(window == freq) ans.push_back(i-k+1);
    }
    return ans;
}

int main() {
    string s = "cbaebabacd", p = "abc";
    vector<int> ans = findAnagrams(s,p);
    for(int x: ans) cout << x << " ";
}
