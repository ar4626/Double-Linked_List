#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * head, *ptr, *newnode;
void doubleLinkedListCreation()
{
    int n, value;
    cout << "Enter the number of node\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data of the " << i + 1 << " Node\n";
        cin >> value;
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            head->data = value;
            head->prev = NULL;
            head->next = NULL;
            ptr = head;
        }
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->data = value;
            newnode->next = NULL;
            newnode->prev=ptr;
            ptr->next = newnode;
            ptr = newnode;
        }
    }
}

void print()
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    doubleLinkedListCreation();
    print();
}