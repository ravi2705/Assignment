// Remove duplicate characters from a string
#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string str) {
    string result = "";
    unordered_set<char> seen;
    for (char c : str) {
        if (!seen.count(c)) {
            seen.insert(c);
            result += c;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "After removing duplicates: " << removeDuplicates(str) << endl;
    return 0;
}
