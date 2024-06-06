#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>b;
        for(int i=0;i<n-1;i++)
        {
            b.push_back(gcd(a[i],a[i+1]));
        }
        int f=0;
        for(int i=0;i<n-2;i++)
        {
            if(b[i]>b[i+1])
            {
                f=i;
                break;
            }
        }
        if(f+2<n)
         m=3;
        else
         m=2;
         int c=0;
        while(m--)
        {   
            b.clear();
            for(int i=0;i<n;i++)
            {
                if(i==f)
                continue;
                b.push_back(gcd(a[i],a[i+1]));
            }
            for(int i=0;i<n-3;i++)
            {
                if(b[i]>b[i+1])
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {cout<<"Yes"<<endl;
                break;}
            f++;
        }
        if(c==1)
        cout<<"NO"<<endl;
    }
}