#include <stdio.h>

int maxArr(int *p, int size)
{
    int max = *p;

    for (int i = 0; i < size; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    return max;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5};

    printf("%d",
        maxArr(
            arr, 
            sizeof(arr) / sizeof(arr[0])
        )
    );
}