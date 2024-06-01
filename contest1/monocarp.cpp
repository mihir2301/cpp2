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
        string s;
        cin>>s;
        int f=0,c=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                f=1;
                if(s[i+1]>='a'&&s[i+1]<='z')
                {
                if(s[i]<=s[i+1])
                continue;
                else
                {
                cout<<"NO"<<endl;
                c=1;
                break;}
            }
            else
            {
                cout<<"NO"<<endl;
                c=1;
                break;
            }
        }
        else{
            if(f==1)
            {cout<<"NO"<<endl;
            c=1;
            break;}
            else{
               // if(s[i+1]!='\0')
                if(s[i]<=s[i+1])
                continue;
                else
                {cout<<"NO"<<endl;
                c=1;
                break;}
            }
        }
        }
        if(c==0)
        cout<<"Yes"<<endl;

    }
}