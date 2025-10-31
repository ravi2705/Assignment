// Valid Palindrome
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int st = 0, end = s.length() - 1;

    while (st < end) {
      
        if (!isalnum(s[st])) {
            st++;
            continue;
        }
        if (!isalnum(s[end])) {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";

    cout << "Is Palindrome? \"" << s1 << "\" → " << isPalindrome(s1) << endl;

    return 0;
}
