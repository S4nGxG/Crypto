#include <bits/stdc++.h>

using namespace std;

string ROT13(string s, int n) {
    string result = "";
    for (char c : s) {
        if(c == ' ') {
            result += ' ';
            continue;
        }
        char base;
        if(isupper(c)) base = 'A';
        else base = 'a';
        result += (c - base + n) % 26 + base;
    }
    return result;
}

int main() {
    string s;

    getline(cin, s);

    for(int i = 1; i <= 25; i++) {
        string result = ROT13(s, i);
        cout << i << ": " << result << endl;
    }
    return 0;
}
