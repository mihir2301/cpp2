#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int s=a+b+c;
    int x,y,z;
    if(s%2==0)
    {
        s=s/2;
        x=s-c;
        y=s-a;
        z=s-b;
        if(x>=0&&y>=0&&z>=0)
        cout<<x<<" "<<y<<" "<<z<<" ";
        else
        cout<<"Impossible";
    }
    else cout<<"Impossible";
}