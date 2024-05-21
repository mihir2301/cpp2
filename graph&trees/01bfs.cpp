#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<pair<int,int>>v[N];
int INF=1e9;
vector<int>lev(N,INF);
int n,m;
int bfs()
{
    deque<int>q;
    q.push_back(1);
    lev[1]=0;
    while(!q.empty())
    {
        int t=q.front();
        q.pop_front();
        for(auto child : v[t])
        {
            int child_v=child.first;
            int wt=child.second;
            if(lev[t]+wt<lev[child_v])
            lev[child_v]=lev[t]+wt;
            if(wt==1)
            {
                q.push_back(child_v);
            }
            else
            q.push_front(child_v);
        }
    }return lev[n];
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back({y,0});
        v[y].push_back({x,1});
    }
    cout<< bfs();
}