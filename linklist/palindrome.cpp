#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void createnode(node* &head,int data)
{
    if(head==NULL)
    {
        node* temp=new node(data);
        head=temp;
    }
    else
    {
        node* temp=new node(data);
        node* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void rev(node* &head)
{
    node*curr=head;
    node* temp=NULL;
    node* prev=NULL;
    while(curr!=NULL)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    head=prev;
    
}
node* findmiddle(node* head)
{
    node*slow=head;
    node*fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main()
{
    node*head=NULL;
    for(int i=0;i<4;i++)
    {
        createnode(head,i);
    }
    for(int i=6;i>=0;i--)
    {
        createnode(head,i);
    }
    node* mid=findmiddle(head);
    rev(mid->next);
    node* temp=mid->next;
    int f=0;
    while(temp!=NULL)
    {
        if(head->data==temp->data)
        {temp=temp->next;
        head=head->next;}
        else
        {
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}