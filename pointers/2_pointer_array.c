#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    p = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        printf("%d\n", p[i]); // in case of array pointer acts as name of an array
    }

    return 0;
}