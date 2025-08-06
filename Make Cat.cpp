#include <bits/stdc++.h>


using namespace std;

int main() {
    string s;
    cin >> s;
    
    sort(s.begin(), s.end());
    string target = "act";
    sort(target.begin(), target.end());
    
    if (s == target) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
