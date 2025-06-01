#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int time = 0;
        int i = 0;
        while (i < N) {
            if (i + 1 < N && S[i] == S[i + 1]) {
              
                time++;
                i += 2;
            } else {
               
                time++;
                i += 1;
            }
        }
        cout << time << endl;
    }
    return 0;
}
