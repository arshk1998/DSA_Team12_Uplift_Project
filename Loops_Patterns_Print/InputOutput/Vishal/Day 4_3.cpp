// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
int n,a[n],i;
cin>>n;
for( i=0;i<n;i++)
{
    cin>>a[i];
}
int x=0,y=0,z=0;
for( i=0;i<n;i++)
{
    if(a[i]==0)
    {
        x++;
    }
    if(a[i]==1)
    {
        y++;
    }
    else if(a[i]==2)
    {
        z++;
    }
    }
    for(int j=0;j<x;j++)
    {
        cout<<"0 ";
    }
    
    for(int j=0;j<y;j++)
    {
        cout<<"1 ";
    }
    for(int j=0;j<z;j++)
    {
        cout<<"2 ";
    }

}
