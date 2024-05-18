#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>v[N];
int subtree_sum[N];
int val[N];
void dfs(int vertex,int par=0)
{
    subtree_sum[vertex]+=val[vertex];
    for(auto child:v[vertex])
    {
        if(child==par) continue;
        dfs(child,vertex);
    }
    subtree_sum[par]+=subtree_sum[vertex];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    cin>>val[i];
    dfs(1);
    int long long m=0;
    for(int i=2;i<=n;i++)
    {
        int p1=subtree_sum[i];
        int p2=subtree_sum[1]-p1;
        m=max(m,p2*p1*1ll);
    }
    cout<<m;
}