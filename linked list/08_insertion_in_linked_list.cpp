#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct node // we created a node
{
    int data;          //  it has a data member
    struct node *next; // and a pointer of its own type
} * first;             // we declared a pointer globally
void Create(int arr[], int n)
{
    int i;
    struct node *t, *last;
    first = new node;
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct node *p)
{
    int count = 0; //  counting nodes using iterative way
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
        count++;
    }
    cout << "\nnodes - " << count << endl;
}
void InsertAtFirstIndex(struct node *p, int num)
{
    struct node *q = new node;
    q->data = num;
    q->next = first;
    first = q;
}
void ReplaceAtAnyIndex(struct node *p, int num, int index)
{
    struct node *t = new node;
    struct node *q;
    t->data = num;
    int i = 0;
    while (i <= index)
    {
        if (i == index)
        {
            t->next = p->next;
            q->next = t;
        }

        q = p;
        p = p->next;
        i++;
    }
}
void InsertAtAnyIndex(struct node *p, int num, int index)
{
    struct node *t = new node;
    t->data = num;
    int i = 0;
    while (i <= index)
    {
        if (i == index)
        {
            t->next = p->next;
            p->next = t;
        }
        p = p->next;
        i++;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    Create(arr, 7);
    Display(first);
    InsertAtFirstIndex(first, 11);
    Display(first);
    InsertAtAnyIndex(first, 12 , 5);
    Display(first);
    ReplaceAtAnyIndex(first, 9 , 3);
    Display(first);

    return 0;
}