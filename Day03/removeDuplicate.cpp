// Remove duplicates (Recursion)
#include <bits/stdc++.h>
using namespace std;

string removeDup(string s) {
    if (s.length() <= 1) return s;
    string rest = removeDup(s.substr(1));
    if (s[0] == rest[0]) return rest;
    else return s[0] + rest;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "After removing duplicates: " << removeDup(s) << endl;
    return 0;
}
