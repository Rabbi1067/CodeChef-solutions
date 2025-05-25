#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int maxNeighbours = X / Y;
        if (maxNeighbours > 20)
            maxNeighbours = 20;
        cout << maxNeighbours << endl;
    }
    return 0;
}
