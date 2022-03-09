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
void delete_head(struct node *p)
{
    first = first->next;
}
void delete_at_index(struct node *p, int index)
{
    p = new node;
    int i = 0;
    p = first;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct node *temp;
    temp = new node;
    temp = p->next;
    p->next = temp->next;
}
void Display_using_loop(struct node *p)
{
    int count = 0; //  counting nodes using iterative way
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
        count++;
    }
    cout << "\nnodes - "
         << count << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Create(arr, n);
    Display_using_loop(first);
    delete_head(first);
    Display_using_loop(first);
    int ind;
    cin>>ind;
    delete_at_index(first,ind);
    Display_using_loop(first);
    return 0;
}