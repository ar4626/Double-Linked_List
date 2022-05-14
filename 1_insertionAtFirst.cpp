#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} * head, *ptr, *newnode;

void create()
{
    int n, data;
    cout << "Enter the number of nodes :\n";
    cin >> n;
    // cout<<"Enter Data :\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data of the " << i + 1 << " Node\n";
        cin >> data;
        newnode = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            head = newnode;
            head->data = data;
            head->next = NULL;
            head->prev = NULL;
            ptr = head;
        }
        else
        {
            newnode->data = data;
            newnode->next = NULL;
            newnode->prev = ptr;
            ptr->next = newnode;
            ptr = newnode;
        }
    }
}

void display()
{
    ptr = head;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void insertAtFirst()
{
    int data;
    cout << "Enter the data that you want to insert in the beginning,\n";
    cin >> data;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    newnode->prev = NULL;
    head->prev = newnode;
    head = newnode;
}


int main()
{
    create();
    display();
    cout << endl;
    insertAtFirst();
    display();
    return 0;
}