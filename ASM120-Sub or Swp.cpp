#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        while(x!=0)
        {
            y=y%x;
            swap(x,y);
        }
        cout<<y<<endl;
    }

}

