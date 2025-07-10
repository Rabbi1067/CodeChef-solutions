#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int m = max(a, max(b, c));
        if(m == a) cout << "Setter" << endl;
        else if(m == b) cout << "Tester" << endl;
        else cout << "Editorialist" << endl;
    }
}
