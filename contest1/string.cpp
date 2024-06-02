#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>m;
    for(auto i:s)
    {
        m[i]++;
    }
    string result="";
    /*vector<int>v;
    for(auto i:m)
    {
        if(i.second%2==0)
        continue;
        else{
            if(find(v.begin(),v.end(),i.first)!=v.end())
            continue;
            else{
            result=result+i.first;
            v.push_back(i.first);}
    }
}
sort(result.begin(),result.end());
cout<<result;*/
int k;
string p="";
for(int i=0;i<s.length();i++)
{
    auto t=find(m.begin(),m.end(),s[i]);
    if((t->second==1))
    {
    p+=(t->first);
    sort(p.begin(),p.end());
    result+=p;}
    else if(t->second%2==0)
    continue;
    else{
        p+=(t->first);

    }

}
}