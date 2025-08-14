#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N + 1);
        
        for (int i = 1; i <= N; i++) {
            cin >> A[i];
        }

        int Num = 1;
        for (int i = 2; i <= N; i++) {
            if (A[i] > A[Num]) {
                Num = i; 
            }
        }
        
        cout << Num << "\n";
    }
    return 0;
}
