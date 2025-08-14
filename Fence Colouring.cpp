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
        vector<int> A(N);
        unordered_map<int,int> freq;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            freq[A[i]]++;
        }

       
        if (freq.size() == 1 && freq.count(1)) {
            cout << 0 << "\n";
            continue;
        }

        int freq_max = 0;
        for (auto &p : freq) {
            freq_max = max(freq_max, p.second);
        }

        if (freq.count(1) && freq[1] == freq_max) {
          
            cout << N - freq[1] << "\n";
        } else {
            cout << 1 + (N - freq_max) << "\n";
        }
    }
    return 0;
}
