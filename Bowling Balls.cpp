#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        int count = 0;
        for (int i = 0; i < N; ++i) {
            int Ai;
            cin >> Ai;
            if (Ai >= X && Ai <= Y) {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
