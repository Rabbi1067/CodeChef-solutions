#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, sum = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x, sum += x;
        sort(a.begin(), a.end());

        int r1 = a[n-1] - min(a[0]-1, a[1]);
        int r2 = max(a[n-2], a[n-1]-1) - a[0];

        if (r1 <= k || r2 <= k)
            cout << (sum % 2 ? "Tom" : "Jerry") << '\n';
        else
            cout << "Jerry\n";
    }
    return 0;
}
