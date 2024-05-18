#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>v[N];
int p[N];
void dfs(int vertex,int par=-1)
{
    p[vertex]=par;
    for(auto child:v[vertex])
    {
        if(child==par)
        continue;
        dfs(child,vertex);
    }
}
vector<int>path(int vertex)
{   
    vector<int>t;
    while(vertex!=-1)
    {
        t.push_back(vertex);
        vertex=p[vertex];
    }
    reverse(t.begin(),t.end());
    return t;
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
    dfs(1);
    int x,y,g;
    cin>>x>>y;
    vector<int>v1=path(x);
    vector<int>v2=path(y);
    int t=min(v1.size(),v2.size());
    for(int i=0;i<t;i++)
    {
        if(v1[i]==v2[i])
        continue;
        else
        {g=v1[i-1];
            break;}
    }
    cout<<g<<endl;
}