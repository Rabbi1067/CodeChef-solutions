#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int sum = 0;
        bool lost = false;

        for (int i = 1; i <= N; ++i) {
            int mark;
            cin >> mark;
            sum += mark;

            double average = (double)sum / i;
            if (average < 40) {
                lost = true;
            }
        }

        if (lost)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}
