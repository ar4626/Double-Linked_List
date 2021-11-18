#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*head,*ptr,*newnode;
void doubleLinkedListCreation(int value)
{
    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=value;
        head->prev=NULL;
        head->next=NULL;
        ptr=head;
    }
    else
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=NULL;
        ptr->next=newnode;
        ptr=newnode;
    }
}

void print()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    doubleLinkedListCreation(1);
    doubleLinkedListCreation(2);
    doubleLinkedListCreation(3);
    doubleLinkedListCreation(4);
    doubleLinkedListCreation(5);
    print();
}