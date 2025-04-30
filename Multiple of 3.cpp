#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int ans=n%3;
	if(ans==0) cout<<n<<endl;
	else if(ans==1) cout<<n-1<<endl;
	else cout<<n+1<<endl;

}
