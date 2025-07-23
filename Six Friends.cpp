#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int option1 = 3 * X;
        int option2 = 2 * Y;
        int min_cost = min(option1, option2);
        cout << min_cost << endl;
    }
    return 0;
}
