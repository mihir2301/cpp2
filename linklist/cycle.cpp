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
node* checkloop(node* head)
{ 
    if(head->next==NULL)
    return 0;
    node* slow=head;
    node*fast=head;
    int f=0;
    while(fast!=NULL)
    {  
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            return fast;
            break;
        }
       
    }
    return NULL;
}
node* startloopnode(node* head){

}
int main()
{
    node* head=NULL;
    for(int i=0;i<9;i++)
    {
        createnode(head,i);
    }
    node* ptr=head;
    node* temp=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while(temp->data!=4)
    {
        temp=temp->next;
    }
    ptr->next=temp;
    

}