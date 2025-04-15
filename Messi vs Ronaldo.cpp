#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int m=2*a+b;
	int c=2*x+y;
	if(m>c) cout<<"Messi"<<endl;
	else if(m<c) cout<<"Ronaldo"<<endl;
	else cout<<"Equal"<<endl;

}
