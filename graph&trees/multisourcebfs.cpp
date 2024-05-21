#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int graph[N][N];
int visited[N][N];
int lev[N][N];
int n,m;
vector<pair<int,int>> movements={
    {1,0},{-1,0},{0,1},{0,-1},
    {1,1},{-1,-1},{-1,1},{1,-1}

};
bool ispossible(int i,int j)
{
    if(i<0||i>(n-1)||j<0||j>(m-1))
    return false;
    else
    return true;
}
int bfs()
{
    queue<pair<int,int>>q;
    int val=0,ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            val=max(val,graph[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(graph[i][j]==val)
            {q.push({i,j});
            visited[i][j]=1;}
        }
    }
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(auto movement:movements)
        {
            int nx=x+movement.first;
            int ny=y+movement.second;
            if(ispossible(nx,ny))
            {
                if(visited[nx][ny]==1)
                continue;
                visited[nx][ny]=1;
                q.push({nx,ny});
                lev[nx][ny]=lev[x][y]+1;
                ans=max(ans,lev[nx][ny]);
            }
        }
    }
    return ans;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>graph[i][j];
        }
    }
    cout<<bfs();
}