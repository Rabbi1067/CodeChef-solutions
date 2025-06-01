#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N, M;
        cin >> N >> M;

        int extra_left = max(0, N - M);  // Extra left shoes needed
        int extra_right = N;             // Always need N right shoes

        int total_extra = extra_left + extra_right;
        cout << total_extra << endl;
    }

    return 0;
}
