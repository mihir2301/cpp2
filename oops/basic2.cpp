#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int rollno;

    student(string name,int data)   //copy constructor
    {
        this->name=name;
        this->rollno=data;
    }

    student()                    // default constructor
    {
        cout<<"Default constructor"<<endl;
    }

    student(student &a)          // copy constructor
    {
        name=a.name;
        rollno=a.rollno;
    }
    bool operator ==(student &a)   //operator overloading
    {
        if(name==a.name&& rollno==a.rollno)
        return true;
        else
        return false;
    }

};
int main()
{
    student a[2];
    for(int i=0;i<2;i++)
    {
        cin>>a[i].name;
        cin>>a[i].rollno;
    }
    student b("g",2);
    student c(b);    // student c=b;

    if(c==a[0])
    cout<<"same";
    else
    cout<<"Not same";
    /*if(c.name==a[0].name&&c.rollno==a[0].rollno)
    cout<<"same";
    else
    cout<<"notsame";*/
}