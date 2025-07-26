#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (X % 5 != 0) {
            cout << -1 << endl;
        } else {
            int coins10 = X / 10;
            int remaining = X % 10;
            int coins5 = remaining / 5;
            cout << coins10 + coins5 << endl;
        }
    }
    return 0;
}
