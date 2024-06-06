#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        map<char,int>map;
        set<char>s;
        string c;
        cin>>c;
        int count=0;
        for(int i=0;i<n;i++)
        {
            map[c[i]]++;
            s.insert(c[i]);
        }
        for(auto i:map)
        {
            if(i.second>=m)
            continue;
            else
            count+=m-i.second;
        }
        int p=(7-s.size())*m;
        count+=p;
        cout<<count<<endl;
    }
}