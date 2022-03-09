#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} * first;
void create(int arr[], int n)
{
    struct node *t, *last;
    first = new node;
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
bool sorted(struct node *p)
{
    int x = p->data;
    p = p->next;
    while (p)
    {
        // cout << x << " " << p->data << endl;
        if (x > p->data)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    create(arr, n);
    cout << sorted(first) << endl;
}