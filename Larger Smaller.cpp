#include <bits/stdc++.h>
using namespace std;

int countGoodIntegers(const vector<int>& A) {
    int minVal = *min_element(A.begin(), A.end());
    int maxVal = *max_element(A.begin(), A.end());

    return max(0, maxVal - minVal - 1);
}

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

        cout << countGoodIntegers(A) << endl;
    }

    return 0;
}
