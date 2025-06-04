#include <iostream>
using namespace std;

int main() 
{
int a,b;
cin>>a>>b;
int boys=a+1;
int girls=b;
int slices=boys*4+girls*3;
int need=(slices+7)/8;
cout<<need<<endl;
    return 0;
}
