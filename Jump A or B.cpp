#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N, M, A, B;
        cin >> N >> M >> A >> B;
        long long delta = M - B * N;
        long long diff = A - B;
        if (diff == 0) {
            cout << (M == A * N ? "Yes" : "No") << endl;
        } else if (delta % diff != 0) {
            cout << "No" << endl;
        } else {
            long long x = delta / diff;
            if (x >= 0 && x <= N)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
