#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        int min_val = A;
        if (B < min_val) min_val = B;
        if (C < min_val) min_val = C;

        int total = A + B + C - min_val;
        cout << total << endl;
    }

    return 0;
}
