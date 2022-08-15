#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node * link;
};

node * createnode(int data)  
{
    node * ptr = new node();
    ptr->data=data;
    ptr->link=NULL;
    return ptr;
}
void append(node* &head,int data)   
{
    node *ptr = createnode(data);   
    if(head==NULL) head=ptr;
    else
    {
        node *t=head;                   
        while(t->link!=NULL)            
        { 
            t=t->link;
        }
        t->link=ptr;    
    }               
}
void display(node* &head)  // Function to dispplay linked list
{
    node* t=head;
    while(t!=NULL)
    {
        cout<<t->data<<"  ";
        t=t->link;
    }
    cout<<endl;
}
void deleteatposition(node* &head,int pos) // function to delete node at given position
{
    if(head==NULL) cout<<"Empty list"<<endl;
    else
    {
        node* left=NULL;
        node* right=head;
        for(int i=1;i<pos && right!=NULL;i++)
        {
            left=right;
            right=right->link;
        }
        if(right==NULL) cout<<"Deletion Not Posiible"<<endl;
        else 
        {
            left->link=right->link;
            delete right;
        }
    }
}
void deletekey(node* &head,int num)
{
    node* t1=NULL;
    node* t2=head;
    while(t2->data!=num && t2!=NULL)
    {
        t1=t2;
        t2=t2->link;
    }
    if(t2!=NULL) 
    {
        t1->link=t2->link;
        delete t2;
    }
    else cout<<"Not found "<<endl;
}
int main()
{
    node* head=NULL;
    append(head,10);
    append(head,20);
    append(head,30);
    append(head,40);
    append(head,50);
    append(head,60);
    display(head);
    deleteatposition(head,2);
    display(head);
    deleteatposition(head,2);
    display(head);
    deleteatposition(head,10);
    deletekey(head,50);
    display(head);
    deletekey(head,100);
    display(head);
    return 0;
}