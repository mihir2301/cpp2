#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        if((p1==p2)&&(p1==p3)&&(p1!=0))
        cout<<"-1"<<endl;
        else if((p1==p2)&&(p1==p3)&&(p1==0))
        cout<<"0"<<endl;
        else if(p1+p2>p3)
        {
            int k=((p1+p2)-p3);
            if(k%2==0)
            cout<<p3+k/2<<endl;
            else cout<<"-1"<<endl;
        }
        else{
            int k=p3-(p1+p2);
            if(k%2==0)
            cout<<p1+p2<<endl;
            else cout<<"-1"<<endl;
        }
    }
}