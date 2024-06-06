#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool f[1001]={false};
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        f[a]=true;
        f[b]=true;
    }
    cout<<n-1<<endl;
    int x=1;
    while(f[x])
    {
        x++;
    }
    for(int i=1;i<x;i++)
    {
        cout<<i<<" "<<x<<endl;
    }
    for(int i=x+1;i<=n;i++)
    {
        cout<<x<<" "<<i<<endl; 
    }
}
