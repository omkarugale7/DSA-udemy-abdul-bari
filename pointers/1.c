#include <stdio.h>

void increment(int *a)
{
    a++;
    printf("%d", a);
}
int main()
{
    int a = 10;
    int *p = &a;
    printf("%d %d %d %d\n", a, *p, p, &a);
    increment(&a);
    return 0;
}
