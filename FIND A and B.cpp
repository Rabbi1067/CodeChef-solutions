#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
    cin >> T;
    while (T--) {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x * y) % z == 0) {
            cout << x * y << " " << z << '\n';
        } else if ((x * z) % y == 0) {
            cout << x * z << " " << y << '\n';
        } else if ((y * z) % x == 0) {
            cout << y * z << " " << x << '\n';
        } else {
            cout << -1 << '\n';
        }
    }


}
