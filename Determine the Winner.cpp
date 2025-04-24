#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int PA, PB, QA, QB;
        cin >> PA >> PB >> QA >> QB;

        int timeP = max(PA, PB);
        int timeQ = max(QA, QB);

        if (timeP < timeQ) {
            cout << "P" << endl;
        } else if (timeP > timeQ) {
            cout << "Q" << endl;
        } else {
            cout << "TIE" << endl;
        }
    }
    return 0;
}
