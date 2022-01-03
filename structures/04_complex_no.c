#include <stdio.h>
struct complex_no
{
    int img;
    int real;
};
int main()
{
    struct complex_no a;
    scanf("%d",&a.img);
    scanf("%d",&a.real);    
    printf("%d+i%d", a.img, a.real);
    return 0;
}
