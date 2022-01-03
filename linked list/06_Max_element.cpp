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

int MAxElement(struct node *p)
{
    int max_element = INT_MIN;
    while (p)
    {
        max_element = max(max_element, p->data);
        p = p->next;
    }
    return max_element;
}
int MAxElementUsingRecursion(struct node *p)
{
    int max_element = INT_MIN, x = 0;
    if (p == 0)
        return max_element;
    else
    {
        x = MAxElementUsingRecursion(p->next);
        return max(x, p->data);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    Create(arr, 7);
    cout << "max element - " << MAxElement(first) << endl;
    cout << "max element - " << MAxElementUsingRecursion(first) << endl;

    return 0;
}