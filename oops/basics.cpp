#include<bits/stdc++.h>
using namespace std;
class student{
    string name;
    public:
    int roll;
    string gender;

    void setname(string s)
    {
        this->name=s;
    }
    string getname()
    {
        return this->name;
    }
};
int main()
{
    student a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].roll;
        string s;
        cin>>s;
        a[i].setname(s);
        cin>>a[i].gender;
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i].roll<<" ";
        cout<<a[i].getname()<<" ";
        cout<<a[i].gender<<endl;
    }
}