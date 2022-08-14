#include <bits/stdc++.h>
using namespace std;
// this program is about creating linked list by insreting nodes in it
// nodes can be inserted at three locations 
// 1) at start
// 2) at last
// 3) after perticular node
class node
{
    public:
    int data;
    node * link;
};
// here instread of defining function create node and initialise using constructor;

node * createnode(int data)  // Function to create node of given data
{
    node * ptr = new node();
    ptr->data=data;
    ptr->link=NULL;
    return ptr;
}
void append(node* &head,int data)   // function to insert node at last
{
    node *ptr = createnode(data);   // creating node with given data and assigning to pointer ptr
    node *t=head;                   // creating pointer t to traverse list and pointing to head
    while(t->link!=NULL)            // traversing till last node
    { 
        t=t->link;
    }
    t->link=ptr;                  
}

void insertatbegin(node * &head,int data)   // function to insert node at begin
{
    node * ptr = createnode(data);
    ptr->link=head;
    head=ptr;
}
void insertafter(node * &head,int after,int num) // function to insert node after perticular node
{
    node* ptr =createnode(num);
    node* left=head;
    node* right=left->link;
    while(left->data!=after && right!=NULL)
    {
        left=right;
        right=right->link;
    }
    if(right==NULL) cout<<"node with data "<<after<<" found "<<endl;
    else
    {
        ptr->link=right;
        left->link=ptr;
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
int main()
{
    node * head=NULL;
    head = createnode(2);
    append(head,10);
    append(head,6);
    append(head,12);
    insertatbegin(head,100);
    insertatbegin(head,200);
    insertafter(head,10,5);
    insertafter(head,5,4);
    display(head);
    insertafter(head,14,15);
    display(head);
    return 0; 
}





