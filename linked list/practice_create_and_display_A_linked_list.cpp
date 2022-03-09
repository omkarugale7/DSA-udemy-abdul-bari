#include <iostream>
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
int display(struct node *first)
{
    int count = 0;
    struct node *temp;
    temp = new node;
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
    return count;
}
int sum(struct node *first)
{
    struct node *temp;
    temp = new node;
    temp = first;
    int sum = 0;
    while (temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}
int disp_using_loop(struct node *first)
{
    if (!first)
        return 0;
    cout << first->data << " ";
    return disp_using_loop(first->next) + 1;
}
int sum_usinfrecursion(struct node *first)
{
    if (!first)
        return 0;
    return sum_usinfrecursion(first->next) + first->data;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    create(arr, n);
    cout << "count- " << display(first) << endl;
    cout << "count- " << disp_using_loop(first) << endl;
    cout << "sum- " << sum(first) << endl;
    cout << "sum- " << sum_usinfrecursion(first) << endl;
}
