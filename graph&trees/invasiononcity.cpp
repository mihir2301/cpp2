#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int parent[N];
int s[N];
void make(int v)
{
    parent[v]=v;
    s[v]=1;
}
int find(int v)
{
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]);
}
void Union(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        if(s[a]>s[b])
        swap(a,b);
        Union(a,b);
        s[a]+=s[b];
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        make(i);
    }
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        Union(u,v);
    }
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(parent[i]==i)
        c++;
    }
    cout<<c;
}

