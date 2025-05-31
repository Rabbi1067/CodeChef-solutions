#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int flip_to_face_up = N - X;
        int flip_to_face_down = X;
        cout << min(flip_to_face_up, flip_to_face_down) << endl;
    }
    return 0;
}
