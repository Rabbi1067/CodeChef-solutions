#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int cost_price = X - Y;
        int new_selling_price = X + (X / 10);
        int new_profit = new_selling_price - cost_price;
        cout << new_profit << endl;
    }
    return 0;
}
