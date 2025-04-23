#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int a=(y+z-1)/z;
    int ans=x*a;
    cout<<ans<<endl;
}
}
