#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph[N][N];
vector<pair<int,int>>v[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
       int v1,v2;
       cin>>v1>>v2;
       graph[v1][v2]=1;
       graph[v2][v1]=1;
    }
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {
        cout<<graph[i][j]<<" ";
    }
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        v[v1].push_back({v2,wt});
        v[v2].push_back({v1,wt});
    }
    for(auto i:v)
    {
        for(auto j:i)
        {
            cout<<j.first<<" "<<j.second<<" ";
        }
    }
    
}