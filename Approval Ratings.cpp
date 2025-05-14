#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        vector<int> A(5);
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            cin >> A[i];
            total += A[i];
        }
        if (total >= 35) {
            cout << 0 << endl;
            continue;
        }
        sort(A.begin(), A.end()); 
        int bribes = 0;
        for (int i = 0; i < 5 && total < 35; ++i) {
            total += (10 - A[i]);
            bribes++;
        }
        cout << bribes * 100 << endl;
    }
    return 0;
}
