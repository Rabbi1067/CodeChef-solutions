#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int boys = 0, girls = 0, count = 0;
        for (char c : S) {
            if (c == 'B') boys++;
            else girls++;
            count++;
            if (girls == 0 && boys > 0) break;
            if (boys > 2 * girls) break;
        }
        cout << count << '\n';
    }
    return 0;
}
