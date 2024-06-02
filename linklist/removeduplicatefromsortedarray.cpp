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
    {node* temp=new node(data);
     head=temp;}
     else{
        node* temp=new node(data);
        node* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
     }
}
node* removeduplicate(node* &head)
{
    node* temp=head;
    node* curr=head->next;
    while(curr!=NULL)
    {
        if(temp->data==curr->data)
        {   node* ptr=curr;
            curr=curr->next;
            temp->next=curr;
            ptr->next=NULL;
            delete ptr;}
        else
        {
        temp=curr;
        curr=curr->next;}
    }
    return head;
}
int main()
{ 
    node* head=NULL;
    for(int i=0;i<3;i++)
    {
        createnode(head,1);
    }
    for(int i=0;i<2;i++)
    {
        createnode(head,2);
    }
    node* ptr=removeduplicate(head);
    while(ptr!=NULL)
    {cout<<ptr->data<<" ";
    ptr=ptr->next;}
}