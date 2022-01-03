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
int Addition_using_loop(struct node *p)
{
    int sum = 0; //  counting nodes using iterative way
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}
int Addition_using_Recursions(struct node *p)
{
    int sum = 0; //  counting nodes using iterative way
    if (!p)
        return 0;

    return sum;
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
int count(struct node *p)
{
    if (!p)
        return 0;
    return count(p->next) + 1;
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
    return 0;
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
    cout << "nodes - " << count(first) << endl;
    cout << "Addition - " << Addition_using_loop(first) << endl;
    cout << "max element - " << MAxElement(first) << endl;
    cout << "Element position- " << SearchingElement(first, 5) << endl;
    cout << "max element - " << MAxElementUsingRecursion(first) << endl;

    return 0;
}