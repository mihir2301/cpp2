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
        int m=0;
        int c=0;
        int st=0;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='#'||s[i]=='\0')
            {
                m=max(m,c);
                c=0;
            }
            else {
                c++;
                st++;
        }}
        if(m>=3)
        cout<<"2"<<endl;
        else
        cout<<st<<endl;
    }
}