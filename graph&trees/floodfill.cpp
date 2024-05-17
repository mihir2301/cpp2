#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<vector<int>> graph;

void dfs(int sr,int sc,int imagecolor,int changecolor,vector<vector<int>> &graph){
    int n=graph.size();
    int m=graph[0].size();
    if(sr<0||sr>=n) return;
    if(sc<0||sc>=m) return;
    if(graph[sr][sc]!=imagecolor) return;

    graph[sr][sc]=changecolor;
    dfs(sr-1,sc,imagecolor,changecolor,graph);
    dfs(sr+1,sc,imagecolor,changecolor,graph);
    dfs(sr,sc+1,imagecolor,changecolor,graph);
    dfs(sr,sc-1,imagecolor,changecolor,graph);
}
int main()
{
    int sr,sc;
    cin>>sr>>sc;
    int n,m;
    cin>>n>>m;
    int changecolor;
    cin>>changecolor;
    for(int i=0;i<n;i++ )
    {
        vector<int>v;
        for(int j=0;j<m;j++)
        {
           int t;
           cin>> t;
           v.push_back(t); 
        }
        graph.push_back(v);
    }
    int imagecolor=graph[sr][sc];
    dfs(sr,sc,imagecolor,changecolor,graph);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
