#include <stdio.h>

struct rect
{
    int a;
    int b;
};
int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rect *p5;
    printf("%d\n", sizeof(p1));
    printf("%d\n", sizeof(p2));
    printf("%d\n", sizeof(p3));
    printf("%d\n", sizeof(p4));
    printf("%d\n", sizeof(p5));

    return 0;
}