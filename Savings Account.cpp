#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int max_sources=z/y;
    if(x*y<=z){
        cout<<0<<endl;
    }
    else{
        cout<<x-max_sources<<endl;
    }
   }
    return 0;
}
