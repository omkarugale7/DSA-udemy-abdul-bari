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
int SearchingElement(struct node *p, int key)
{
    int i = 1;
    while (p)
    {
        if (p->data == key)
            return i;
        i++;
        p = p->next;
    }
    return -1;
}
int SearchingElementUsingRecursion(struct node *p, int key )
{  
    if (!p)
        return -1;

    if (p->data == key)
        return key;
    else
      return SearchingElementUsingRecursion(p->next, key);
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    Create(arr, 7);
    Display_using_loop(first);
    cout << endl;
    cout << "Element position- " << SearchingElement(first, 5) << endl; // we finding position here
    cout << "Element is- " << SearchingElementUsingRecursion(first, 5 ) << endl; //we finding if element is there or not here

    return 0;
}