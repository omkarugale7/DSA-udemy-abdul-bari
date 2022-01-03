#include<stdio.h>

struct Point
{
int x, y;
};

int main()
{
// Create an array of structures
int n;
scanf("%d",&n);
struct Point arr[n];

for (int i = 0; i <n ; i++)
{
    scanf("%d %d",&arr[i].x,&arr[i].y);
}
for (int i = 0; i < n; i++)
{
    printf("%d %d\n",arr[i].x,arr[i].y);
}

return 0;
}
