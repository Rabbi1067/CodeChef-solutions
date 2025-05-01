#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
	   int count = 0;
    while (N > 0) {
        int S = static_cast<int>(sqrt(N));
        count++;
        N -= S * S;
    }
    cout<<count<<endl;
}
}
