#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A1, A2, B1, B2;
        cin >> A1 >> A2 >> B1 >> B2;

        int net = (A1 - A2) + (B1 - B2);

        if (net < 0)
            cout << "YES\n"; 
        else
            cout << "NO\n";  
    }

    return 0;
}
