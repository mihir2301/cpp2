#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data ;
    node* next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertatstart(node* &head,node* &tail,int data)
{
    if(head==NULL)
    {
        node* temp=new node(data);
        head=temp;
        tail=temp;
    }
    else{
        node* temp=new node(data);
        temp->next=head;
        head=temp;
    }
}
void insertatend(node* &head,node* &tail,int data)
{
    if(tail==NULL)
    {
        node* temp=new node(data);
        tail=temp;
        head=temp;
        temp->next=NULL;
    }
    else{
        node* temp=new node(data);
        tail->next=temp;
        temp->next=NULL;
    }
}
void insertatposition(node* &head,int pos,int data)
{
    if(pos==1)
    {
        node* temp=new node(data);
        temp->next=head;
        head=temp;
    }
    else{
        node *prev=head;
        node* curr=head->next;
        int n=2;
        while(n<pos)
        {
            prev=prev->next;
            curr=curr->next;
            n++;
        }
        node* temp=new node(data);
        prev->next=temp;
        temp->next=curr;
    }
}
void deleteatpos(node* &head,int pos)
{
    if(pos==1)
    {
        node* temp=head;
        int d=head->data;
        head=head->next;
        temp->next=NULL;
        cout<<"deleted node is"<<d;
        delete temp;
    }
    else{
        node* prev=head;
        node* curr=head->next;
        int n=2;
        while(n<pos)
        {
            prev=prev->next;
            curr=curr->next;
            n++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        cout<<"deleted node is"<<curr->data;
        delete curr;
    }
}
void printno(node* &head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    insertatstart(head,tail,8);
    insertatend(head,tail,9);
    insertatposition(head,2,10);
    deleteatpos(head,2);
    printno(head);
}