#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int total=n*x;
       if(total>=10000 && total<=99999) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

}
