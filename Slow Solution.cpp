#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
int t,n,sum;
cin>>t>>n>>sum;
int ans=0;
while(t&&sum){
    int x=min(n,sum);
    ans=ans+(x*x);
    sum=sum-x;
    t--;
}
cout<<ans<<endl;
}
}
