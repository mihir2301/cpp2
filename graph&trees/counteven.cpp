#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int c=0;
vector<int>v[N];
void dfs(int vertex,int parent)
{
    for(auto child:v[vertex])
    {
        if(child==parent)
        continue;
        dfs(child,vertex);
    }
    if(vertex%2==0)
    c++;
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
    cout<<c;

}