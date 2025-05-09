#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int total_water = 0;
        for (int i = 0; i < N; i++) {
            int a;
            cin >> a;
            total_water += a;
        }
        int min_bottles = (total_water + X - 1) / X;
        cout << min_bottles << endl;
    }
    return 0;
}
