#include<bits/stdc++.h>
using namespace std;
const int N=1e3 + 10;
vector<int>v[N];
vector<int>visited(N,0);
void dfs(int node)
{   if(visited[node]==1)
     return;
    visited[node]=1;
    for(auto child:v[node])
    dfs(child);
}
int main()
{
    int n,m,t;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }
    for(auto i:v)
    {
        for(auto j:i)
        t=j;
        break;
    }
    dfs(t);
}