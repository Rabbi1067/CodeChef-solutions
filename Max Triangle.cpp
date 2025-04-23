#include <bits/stdc++.h>

using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
      
        long long a = N, b = N - 1, c = N - 2;
        if (c + b > a) {
            cout << (a + b + c) << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
