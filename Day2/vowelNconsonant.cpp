// Count number of vowels, consonants, spaces in String
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Take u forward is Awesome";

    int vowels = 0, consonants = 0, spaces = 0;

    for (char ch : str) {
        ch = tolower(ch); 

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } 
        else if (isalpha(ch)) { 
            consonants++;
        } 
        else if (isspace(ch)) { 
            spaces++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "White spaces: " << spaces << endl;

    return 0;
}
