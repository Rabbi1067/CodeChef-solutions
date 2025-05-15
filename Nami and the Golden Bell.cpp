#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long sum_n = n * (n + 1) / 2;
        long long m = sqrt(sum_n);
        if (m * m < sum_n) {
            m++;
        }
        cout << m << '\n';
    }
    return 0;
}
