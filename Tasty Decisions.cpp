#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int ans=2*x;
	    int ans2=5*y;
	    if(ans==ans2) cout<<"Either"<<endl;
	    else if(ans>ans2) cout<<"Chocolate"<<endl;
	    else cout<<"Candy"<<endl;
	}
}
