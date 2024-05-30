#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int sum=INT_MIN,sum2=INT_MIN;
    int k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            k=a[i][j];
            sum2=0;
            for(int t=0;t<n;t++)
            {
                for(int y=0;y<m;y++)
                {
                    if(t==i||y==j)
                    continue;
                    else
                    sum2=max(a[t][y],sum2);
                }
            }
            sum=max(sum,k+sum2);
    }
    }
   
    cout<<sum;
}