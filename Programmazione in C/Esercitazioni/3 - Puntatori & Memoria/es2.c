#include <stdio.h>

void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // int *p = arr;
    int *p = &arr[0];

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));

        // printf("%d ", *p);
        // p++;
    }
}