#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 0;
    if (s.length() == 7) {
        if (s[0] == 'W') c++;
        if (s[1] == 'E') c++;
        if (s[2] == 'C') c++;
        if (s[3] == 'N') c++;
        if (s[4] == 'I') c++;
        if (s[5] == 'T') c++;
        if (s[6] == 'K') c++;
    }
    if (c == 7) cout << "Welcome to Web Club!" << endl;
    else cout << "Access denied" << endl;
}
