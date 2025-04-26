#include <bits/stdc++.h>
using namespace std;

int main() {
     int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
 for (int i = N - 2; i >= 0 && K > 0; --i) {
            if (S[i] == '0' && S[i + 1] == '1') {
                S[i] = '1';
                --K;
            }
        }

        int ones = 0;
        for (char c : S)
            if (c == '1') ++ones;

        cout << ones << '\n';
    }

}
