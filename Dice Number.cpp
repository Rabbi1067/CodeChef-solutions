#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
    
        vector<int> alice(3), bob(3);
        for (int i = 0; i < 3; i++) {
            cin >> alice[i];
        }
        for (int i = 0; i < 3; i++) {
            cin >> bob[i];
        }
        

        sort(alice.begin(), alice.end(), greater<int>());
        sort(bob.begin(), bob.end(), greater<int>());
        
      
        int aliceScore = alice[0] * 100 + alice[1] * 10 + alice[2];
        int bobScore = bob[0] * 100 + bob[1] * 10 + bob[2];
        
     
        if (aliceScore > bobScore)
            cout << "Alice" << endl;
        else if (bobScore > aliceScore)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
    return 0;
}
