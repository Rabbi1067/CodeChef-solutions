#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int a,b,c,d;
cin>>a>>b>>c>>d;
int x=abs(a-b);
int y=abs(c-d);
if(x==y) cout<<"Both"<<endl;
else if(x<y) cout<<"First"<<endl;
else cout<<"Second"<<endl;
}
