#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m1,m2,p;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        map<int,int>m;
        for(int i=0;i<n;i++)
        m[a[i]]++;
        if(m.size()>2)
        cout<<"NO"<<endl;
        else if(m.size()==1)
        cout<<"YES"<<endl;
        else{
            for(auto i:m)
            {
            p=i.first;
            m1=i.second;
            break;}
            for(auto i:m)
            {
                if(i.first==p)
                continue;
                m2=i.second;
            }
            if(abs(m1-m2)>1)
            cout<<"NO"<<endl;
            else
            cout<<"yes"<<endl;
        }
    }
}