#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
        int X, Y;
        cin >> X >> Y;
        
        if (X < 50)
            cout << "Z" << endl;
        else if (Y < 50)
            cout << "F" << endl;
        else
            cout << "A" << endl;
    }
}
