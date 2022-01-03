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
         << count;
}

void Display_using_recursion_revserse(struct node *p)
{
    if (p != NULL)
    {
        Display_using_recursion_revserse(p->next);
        cout << p->data << " ";
    }
}
void Display_using_recursion(struct node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        Display_using_recursion(p->next);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    Create(arr, 7);
    Display_using_loop(first);
    cout << endl;
    Display_using_recursion(first);
    cout << endl;
    Display_using_recursion_revserse(first);
    cout << endl;
    return 0;
}