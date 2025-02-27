#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int om=0;
        int addy=0;
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                om=0;
            }
            else
            {
                om++;
            }
            if(b[i]==0)
            {
                addy=0;
            }
            else
            {
                addy++;
            }
            max1=max(max1,om);
            max2=max(max2,addy);
        }

        if(max1>max2)
        {
            cout<<"Om"<<endl;
        }
        else if(max1<max2)
        {
            cout<<"Addy"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
    }

}
