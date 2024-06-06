#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int p=a[f-1];
        sort(a,a+n);
        reverse(a,a+n);
    
        if(a[k-1]>p)
        cout<<"NO"<<endl;
        else if(a[k-1]<p)
        cout<<"YES"<<endl;
        else if(a[k-1]==p&&k!=(n)&&a[k]==p)
        cout<<"Maybe"<<endl;
        else cout<<"YES"<<endl;
    }
}