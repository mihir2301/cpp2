#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    {
        while(t--)
        {
            int n;
            cin>>n;
            string s,result="";
            cin>>s;
            set<char>p;
            vector<char>v;
            vector<char>v2;
            map<char,char>m;
            for(int i=0;i<n;i++)
            p.insert(s[i]);
            for(auto i:p)
            {
                v.push_back(i);
                v2.push_back(i); 
            }
            reverse(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
            {
                m[v2[i]]=v[i];
            }
            for(int i=0;i<s.length();i++)
            {
                result=result+m[s[i]];
            }
            cout<<result<<endl;
        }
    }
}