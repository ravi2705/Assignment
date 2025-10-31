#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Take12% *u ^$#forward";
    string result = "";

    for (char ch : str) {
        if (isalpha(ch)) { 
            result += ch;
        }
    }

    cout << "Original string: " << str << endl;
    cout << "String with only alphabets: " << result << endl;

    return 0;
}
