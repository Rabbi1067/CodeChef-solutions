#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long A, B;
cin >> A >> B;

    long long result = A * B - min(A, B);
    cout << result << "\n";
    return 0;
}
