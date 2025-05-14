#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 998244353;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());  // Sort A in increasing order

        long long res = 1;
        for (int i = 0; i < N; ++i) {
            int choices = A[i] - i;
            if (choices <= 0) {
                res = 0;
                break;
            }
            res = (res * choices) % MOD;
        }

        cout << res << '\n';
    }
    return 0;
}
