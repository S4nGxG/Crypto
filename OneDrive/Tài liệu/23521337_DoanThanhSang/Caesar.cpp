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
    int n;

    getline(cin, s);

    cin >> n;

    string result = ROT13(s, n);
    cout << result << endl;

    return 0;
}
