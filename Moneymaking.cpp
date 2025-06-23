#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y; // Read number of nuggets and star pieces

    int total_money = X * 5000 + Y * 9800; // Calculate total money

    cout << total_money << endl; // Output the result

    return 0;
}
