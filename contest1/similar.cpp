#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0,f=0;
        int a[n];
        int b[n+1];
        int p=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<=n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {   
            if((b[n]>=a[i]&&b[n]<=b[i])||(b[n]<=a[i]&&b[n]>=b[i])||b[n]==a[i])
            f=1;
            else
            p=min(p,abs(a[i]-b[n]));
            c=c+abs(a[i]-b[i]);
        }
        if(f==1)
        cout<<c+1<<endl;
        else cout<<c+p+1<<endl;
    }
}