#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head,*ptr,*newnode;

void create()
{
    int n,data;
    cout<<"Enter the Number of Node :\n";
    cin>>n;
    cout<<"Enter the element :\n";
    for(int i=0;i<n;i++)
    {
        cin>>data;
        newnode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            head=newnode;
            head->data=data;
            head->next=NULL;
            head->prev=NULL;
            ptr=head;
        }
        else
        {
            newnode->data=data;
            newnode->next=NULL;
            newnode->prev=ptr;
            ptr->next=newnode;
            ptr=newnode;
        }
    }
}

void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<"Element :"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

void insertAtIndex()
{
    int index,data,i=0;
    cout<<"Enter the index to insert :\n";
    cin>>index;
    cout<<"Enter the data: \n";
    cin>>data;
    newnode=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    while(i!= index-1)
    {
        ptr=ptr->next;
    }
    newnode->data=data;
    newnode->next=ptr->next;
    newnode->prev=ptr;
    ptr->next=newnode;



}

int main()
{
    create();
    display();
    insertAtIndex();
    display();
}

