#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// first we'll create a node=> a node contains two members one has data other is a pointer which has adress of next node
// also our pointer is pointing to a node, so it is of node type
// now we can use structure or class to define or create a node, diff bw class and structure
// in structure evrything by default is public and in class its private
struct node // we created a node
{
    int data;          // it has a data member
    struct node *next; // and a pointer of its own type
};                     // so this is called as self referential structure(famously used for linked list)

int main()
{
    struct node *p;
    p = new node;
    p->data = 10;
    p->next = NULL;
    cout << p->data << endl;
    cout << p->next << endl;
    return 0;
}