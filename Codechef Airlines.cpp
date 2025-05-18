#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int totalSeats = 10 * X;         
        int bookedSeats = min(totalSeats, Y);
        int earnings = bookedSeats * Z;    

        cout << earnings << endl;
    }

    return 0;
}
