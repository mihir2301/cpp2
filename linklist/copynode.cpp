#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* abr;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->abr=NULL;
    }
};
void createNode(node* &head,node* &tail,int data)
{
    node* temp=new node(data);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }

}
void copynode(node*&head,node*&tail,int data)
{
    node*temp=new node(data);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}
void mapping(node*&head,node*&chead)
{
    node*temp=head;
    node*link=head;
    node*temp2=chead;
    node*link2=chead;
    while(temp!=NULL)
    {
        temp=temp->next;
        link->next=temp2;
        link=temp;
        link2=link2->next;
        temp2->next=link;
        temp2=temp2->next;
    }
} 
int main()
{
    node*head=NULL;
    node*tail=NULL;
    for(int i=1;i<=5;i++)
    {
        createNode(head,tail,i);
    }
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp->abr=temp->next->next;
        temp=temp->next;
    }
    temp=head;
    node* copytemp=NULL;
    node* copytail=NULL;
    while(temp!=NULL)
    {
        copynode(copytemp,copytail,temp->data);
        temp=temp->next;
    }
    mapping(head,copytemp);
    temp=head;
    node*temp2=copytemp;
    while(temp!=NULL)
    {
      node*ptr=temp->abr;
      if(ptr!=NULL)
      temp2->abr=ptr->next;
      else
      temp2->abr=NULL;
      if(temp2->next!=NULL)
      temp2=temp2->next->next;
      temp=temp->next->next;
    }
    temp2=copytemp;
    node* ptr=copytemp;
    while(ptr->next!=NULL)
    {
        ptr=temp2->next->next;
        temp2->next=ptr;
        temp2=ptr;
    }
    temp2=copytemp;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        if(temp2->abr!=NULL)
        cout<<temp2->abr->data<<" ";
        else
        cout<<"NULL";
        temp2=temp2->next;
    }
}