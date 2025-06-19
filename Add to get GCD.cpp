#include <iostream>
#include <algorithm> // for __gcd
using namespace std;

int min_operations(int x, int y) {
    if (__gcd(x, y) > 1)
        return 0;
    if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1)
        return 1;
    return 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << min_operations(x, y) << '\n';
    }
    return 0;
}
