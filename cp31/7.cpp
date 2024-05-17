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
        string x,s;
        cin>>x>>s;
        size_t pos;
        int c=0;
        if(m>n){
        while(x.length()<m)
        {
            x=x+x;
            c++;
        }}
        else if(m<=n){
        pos= x.find(s);
        if(pos!=string::npos)
        cout<<c<<endl;
         else if(pos==string::npos)
        {
            x=x+x;
            c=1;
            pos= x.find(s);
            if(pos!=string::npos)
            cout<<c<<endl;
        }
         if(pos==string::npos)
        {
            x=x+x;
            c=2;
            pos= x.find(s);
            if(pos!=string::npos)
            cout<<c<<endl;
        }
        }
        pos=x.find(s);
        if(pos!=string::npos)
        cout<<c<<endl;
        else
        cout<<"-1"<<endl;
    }
}