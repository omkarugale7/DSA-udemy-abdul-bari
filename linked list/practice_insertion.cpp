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
void insert_at_head(struct node *p, int data)
{
    struct node *temp;
    temp = new node;
    temp->data = data;
    temp->next = p;
    first = temp;
}
void insert_at_any_index(struct node *p, int data,int index)
{
    struct node *temp;
    temp = new node;
    temp->data = data;
    int i = 0;
    p=first;
    while (i != index - 1)
    {
        // if (i == index - 1)
        // {
        //     temp->data = data;
        //     temp->next = p->next;
        //     p->next = temp;
        //     break;
        // }
        p = p->next;
        i++;
    }
    temp->next = p->next;
    p->next = temp;
    return;
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
    int data;
    cin >> data;
    insert_at_head(first, data);
    Display_using_loop(first);
    int a, index;
    cin >> a >> index;
    insert_at_any_index(first, a, index);
    Display_using_loop(first);
    
    return 0;
}