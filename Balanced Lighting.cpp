#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> C(N);
        int red = 0, blue = 0, undecided = 0;
        for (int i = 0; i < N; ++i) {
            cin >> C[i];
            if (C[i] == 1) red++;
            else if (C[i] == 2) blue++;
            else undecided++;
        }

        int diff = abs(red - blue);
        if ((undecided + diff) % 2 != 0 || diff > undecided) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}
