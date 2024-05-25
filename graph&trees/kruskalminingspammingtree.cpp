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
    if(parent[v]==v) return v;
    return parent[v]=find(parent[v]);
}
void Union(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        if(s[a]<s[b])
        swap(a,b);
        parent[b]=a;
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
    vector<pair<int,pair<int,int>>> v;
    for(int i=0;i<m;i++)
    {
        int wt,x,y;
        cin>>wt>>x>>y;
        v.push_back({wt,{x,y}});
    }
    sort(v.begin(),v.end());
    int total_wt=0;
    for(auto edge:v)
    {
        int w=edge.first;
        int x=edge.second.first;
        int y=edge.second.second;
        if(find(x)==find(y)) continue;
        Union(x,y);
        total_wt+=w;
    }
    cout<<total_wt;
}
