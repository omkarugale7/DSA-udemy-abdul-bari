#include <stdio.h>
#include <stdlib.h>
struct square
{
    int side;
    int area;
};

int main()
{
    struct square r;
    r.side = 5;
    r.area = r.side * r.side;
    printf("%d %d\n", r.side, r.area);
    struct square *p = &r;
    (*p).side = 6;
    (*p).area = (*p).side * (*p).side;
    printf("%d %d\n", r.side, r.area);
    p->side = 7;
    p->area = p->side * p->side;
    printf("%d %d\n", r.side, r.area);
    struct square *p1;
    p1 = (struct square*)malloc(sizeof(struct square));
    p1->side = 5;
    p1->area = p1->side * p1->side;
    printf("%d %d\n", p1->side, p1->area);
    return 0;
}