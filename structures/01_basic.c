#include <stdio.h>
struct rect
{
    int l;
    int b;
} r2,r4; //  can be declared here too
struct rect r3;//  can be declared here too
int main()
{
    struct rect r = {10, 5};
    printf("length = %d , breadth = %d\n", r.l, r.b);
    r.l = 15;
    r.b = 20;
    printf("length = %d , breadth = %d\n", r.l, r.b);
    struct rect r1;
    r1.l = 25;
    r1.b = 30;
    printf("length = %d , breadth = %d\n", r1.l, r1.b);
    r2.l = 115;
    r2.b = 125;
    printf("length = %d , breadth = %d\n", r2.l, r2.b);
    r3.l = 215;
    r3.b = 225;
    printf("length = %d , breadth = %d\n", r3.l, r3.b);
    r4.l = 315;
    r4.b = 325;
    printf("length = %d , breadth = %d\n", r4.l, r4.b);
    printf(" %d\n",sizeof(r1));

    return 0;
}