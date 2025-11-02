// Calculate frequency of a character
#include <bits/stdc++.h>
using namespace std;

int charFrequency(string str, char ch) {
    int freq = 0;
    for (char c : str) if (c == ch) freq++;
    return freq;
}

int main() {
    string str;
    char ch;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Enter character: ";
    cin >> ch;
    cout << "Frequency of '" << ch << "' = " << charFrequency(str, ch) << endl;
    return 0;
}
