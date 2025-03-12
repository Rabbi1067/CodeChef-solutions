#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
        int diff = abs(a - b);

        if (diff == k) {
            cout << "0" << endl;
            continue;
        }

        int sum = a + b;
        if (k > sum || (k % 2 != diff % 2)) {
            cout << "-1" << endl;
            continue;
        }

        cout << abs(k - diff) / 2 << endl;
    }
    return 0;
}
