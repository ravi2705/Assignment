// Print maximum occurring character in a string
#include <bits/stdc++.h>
using namespace std;

char maxOccurringChar(string str) {
    vector<int> freq(256, 0);
    for (char c : str) freq[c]++;
    int maxCount = 0; char res = '\0';
    for (char c : str) {
        if (freq[c] > maxCount) {
            maxCount = freq[c];
            res = c;
        }
    }
    return res;
}

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Maximum occurring character: " << maxOccurringChar(str) << endl;
    return 0;
}
