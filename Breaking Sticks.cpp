#include <bits/stdc++.h>
using namespace std;
int ans(int len){
    return len-1;
}

int main() {
int t;
cin>>t;
while(t--){
    int m;
    cin>>m;
    int sum=0;
    for(int i=0;i<m;i++){
        int len;
        cin>>len;
        sum=sum+ans(len);
    }
    
    cout<<sum<<endl;
}

}
