#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
const int INF=1e5;
vector<pair<int,int>>g[N];
vector<int> dis(N,INF);
int vis[N];

void bfs(int source)
{ 
   
 dis[source]=0;
 set<pair<int,int>>s;
 s.insert({0,source});
 while(s.size()!=0)
 {
    auto it=*s.begin();
    int v=it.second;
    s.erase(s.begin());
    if(vis[v]==1) continue;
    vis[v]=1;
    for(auto child:g[v])
    {
        int v1=child.first;
        int wt1=child.second;
        if(dis[v]+wt1<dis[v1])
        {
            dis[v1]=dis[v]+wt1;
            s.insert({dis[v1],v1});
        }
    }
 }

}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        g[x].push_back({y,w});
    }
    bfs(1);
    cout<<dis[3];
}