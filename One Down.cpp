#include <iostream>
#include <string>
using namespace std;

bool isConvertible(const string& s, const string& t, int n) {
    int extraOnes = 0;
    for (int i = 0; i < n; ++i) {
        if (t[i] == '1' && s[i] != '1') {
            return false; // Can't create 1
        }
        if (s[i] == '1' && t[i] == '0') {
            extraOnes++;
        }
    }
    return extraOnes % 2 == 0; // We can only remove 1s in pairs
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s, t;
        cin >> n >> s >> t;
        cout << (isConvertible(s, t, n) ? "Yes" : "No") << '\n';
    }
    return 0;
}
