#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        string T;
        for (char c : S) {
            if (c == '0') {
                T += '1';
            } else {
                T += '0';
            }
        }
        cout << T << '\n';
    }
    return 0;
}
