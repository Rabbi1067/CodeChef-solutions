#include <iostream>
using namespace std;

int main() {
    int A1, A2, B1, B2, C1, C2;
    cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;

    int round1 = max(A1, A2);
    int round2 = max(B1, B2);
    int round3 = max(C1, C2);

    int totalScore = round1 + round2 + round3;

    cout << totalScore << endl;

    return 0;
}
