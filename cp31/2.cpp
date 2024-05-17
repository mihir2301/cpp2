#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int m[n+2]={0};
       m[0]=a[0]-0;
       for(int i=0;i<n-1;i++)
       m[i+1]=a[i+1]-a[i];
       m[n]=2*(x-a[n-1]);
       cout<<*max_element(m,m+n+1)<<endl;
    }
}