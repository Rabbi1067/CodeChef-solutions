#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a>b) cout<<"LOSS"<<endl;
	    else if(a==b) cout<<"NEUTRAL"<<endl;
	    else cout<<"PROFIT"<<endl;
	}
}
