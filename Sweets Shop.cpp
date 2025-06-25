#include <iostream>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

 
    int laddu_cost = 10 * N;

   
    int remaining = X - laddu_cost;

   
    int jalebis = remaining / 20;

   
    cout << jalebis << endl;

    return 0;
}
