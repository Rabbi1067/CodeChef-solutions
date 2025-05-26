#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int count = 0, x;
        for (int i = 0; i < 5; i++) {
            cin >> x;
            count += x;
        }
        if (count >= 4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
