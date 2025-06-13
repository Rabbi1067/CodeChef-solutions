#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    int required = max(25 - X, 0);
    int years = (required + 3) / 4; 
    cout << years << endl;
    return 0;
}
