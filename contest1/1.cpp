#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int c1;
        int c2,c3;
        if(x<=7&&y<=2&&x>0&&y>0)
        cout<<1<<endl;
        else{
        int p=y/2;
        int r=y%2;
        if(r!=0)
        c1=p+1;
        else
        c1=p;
        c2=15*c1-y*4;
        if(x<=c2)
        cout<<c1<<endl;
        else{
        int w=(x-c2)/15;
        int w2=(x-c2)%15;
        if(w2!=0)
        c3=w+1;
        else
        c3=w;
        cout<<c1+c3<<endl;
        }
    }
    }
}