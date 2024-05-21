#include<bits/stdc++.h>
using namespace std;
int visited[8][8];
int lev[8][8];
int INF=1e9+10;

int getxaxis(string s)
{
    int x=s[0]-'a';
    return x;
}
int getyaxis(string s)
{
    int x=s[1]-'1';
    return x;
}
bool ispossible(int x,int y)
{
if((x>7)||(x<0)||(y>7)||(y<0))
return false;
else
return true;

}
vector<pair<int,int>> movements={
    {1,2},{-1,2},{-1,-2},{1,-2},{2,1},{2,-1},{-2,1},{-2,-1}
};

void bfs(string st,string end)
{
   int x1=getxaxis(st);
   int y1=getyaxis(st);
   int x2=getxaxis(end);
   int y2=getyaxis(end);
    queue<pair<int,int>>q;
    q.push({x1,y1});
    visited[x1][y1]=1;
    lev[x1][y1]=0;
    while(!q.empty())
    {
        int t=q.front().first;
        int p=q.front().second;
        q.pop();
        for(auto child:movements)
        {   
            int f=t+child.first;
            int s=p+child.second;
            if(ispossible(f,s))
            {
                if(visited[f][s]==1)
                continue;
                q.push({f,s});
                visited[f][s]=1;
                lev[f][s]=lev[t][p]+1;
            }
        }
         if(lev[x2][y2]!=INF)
            break;
    }
}
int main()
{
   string st,end;
   cin>>st>>end; 
   int x=getxaxis(end);
   int y=getyaxis(end);
   for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
        lev[i][j]=INF;
    }
   }
   bfs(st,end);
   cout<<lev[x][y];
}