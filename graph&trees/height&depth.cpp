#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>tree[N];
int height[N];
int depth[N];
void dfs(int vertex,int parent)
{
    
    for(auto child:tree[vertex])
    {
        if(child==parent) continue;
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        height[vertex]=max(height[vertex],height[child]+1);
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }
    dfs(1,0);
    for(int i=0;i<n;i++)
    {
        cout<<height[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<depth[i]<<" ";
    }
}