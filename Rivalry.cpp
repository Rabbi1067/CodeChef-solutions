#include <iostream>
using namespace std;

int main() {
    int R1, R2;
    cin >> R1 >> R2;
    int D1, D2;
    cin >> D1 >> D2;

    int finalDominater = R1 + D1;
    int finalEverule = R2 + D2;

    if (finalDominater > finalEverule) {
        cout << "Dominater" << endl;
    } else {
        cout << "Everule" << endl;
    }

    return 0;
}
