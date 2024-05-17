#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>v[N];
int depth[N];
void dfs(int vertex,int par=0)
{
    depth[vertex]=depth[par]+1;
    for(auto child:v[vertex])
    {
        if(child==par) continue;
        dfs(child,vertex);
    }
}
int main()
{
    int n;
    int t;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    depth[0]=-1;
    dfs(1);
   // for(int i=1;i<=n;i++)
   // cout<<depth[i]<<" ";
    int k=*max_element(depth,depth+(n+1));
    cout<<k<<endl;
    for(int i=1;i<=n;i++)
    {
        if(depth[i]==k)
        {t=i;
        break;}
    }
    //cout<<t<<endl;
    for(int i=1;i<=n;i++)
    {depth[i]=0;}
    dfs(t);
    cout<<*max_element(depth,depth+(n+1));
}