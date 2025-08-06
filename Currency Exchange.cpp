#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int i_value = 5 * a1 + b1;
        int t_value = 5 * a2 + b2;

        if (i_value >= t_value && (i_value - t_value) % 6 == 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
