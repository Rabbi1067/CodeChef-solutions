#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int missing_doll = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            missing_doll ^= x; // XOR to find the unpaired doll
        }

        cout << missing_doll << endl;
    }

    return 0;
}

