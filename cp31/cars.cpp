#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string cars[n];
    for(int i=0;i<n;i++)
    {
        cin>>cars[i];
    }
    int a[n];
    int result;
    for(int i=0;i<n;i++)
    {
        a[i]=stoi(cars[i], nullptr, 2);
    }
    int r[n];
    for(int i=0;i<n;i++)
    {   int count=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            else{
                result=a[i]^a[j];
               int c=__builtin_popcount(result);
               if(c<=1)
               count++;
            }
        }
          r[i]=count;
    }
    for(int i=0;i<n;i++)
    cout<<r[i]<<" ";
}