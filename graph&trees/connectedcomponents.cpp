#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N];
vector<int>v[N];
vector<int>cc(N);
vector<vector<int>>comp;
void dfs(int node)
{
    if(a[node]==1)
    return;
    a[node]=1;
    cc.push_back(node);
    for(auto child:v[node])
    {
        dfs(child);
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        continue;
        else
       { cc.clear();
        dfs(i);
        comp.push_back(cc);
        }
    }
    for(auto i:comp)
    {
        for(auto j:i)
        {cout<<j<<" ";}
         cout<<endl;
    }
    cout<<comp.size();
}