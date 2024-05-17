#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>v[N];
int subtree_sum[N];
void dfs(int vertex,int parent)
{
    subtree_sum[vertex]+=vertex;
    for(auto child:v[vertex])
    {
        if(child==parent)
        continue;
        dfs(child,vertex);
        //subtree_sum[vertex]+=subtree_sum[child];
    }
    subtree_sum[parent]+=subtree_sum[vertex];
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
    dfs(1,0);
    for(int i=1;i<=n;i++)
    cout<<subtree_sum[i]<<endl;
}