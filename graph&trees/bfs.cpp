#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>v[N];
int level[N];
int vis[N];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=1;
    
        while(!q.empty())
        {
            int t=q.front();
            q.pop();
            for(auto child:v[t])
            {
                if(vis[child]==1)
                continue;
                q.push(child);
                vis[child]=1;
                level[child]=level[t]+1;
            }
        }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(1);
    for(int i=1;i<=n;i++)
    cout<<i<<" "<<level[i]<<endl;
}