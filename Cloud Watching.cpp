#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (B >= 3 * A) {
        cout << "Rain" << endl;
    } else {
        cout << "Dry" << endl;
    }

    return 0;
}
