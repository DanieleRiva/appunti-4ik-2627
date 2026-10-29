#include <stdio.h>

int sumArr(int *p, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(p + i);

        // Alternativa:
        // sum += *p;
        // p++;
    }

    return sum;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5};

    printf("%d",
        sumArr(
            arr,
            sizeof(arr) / sizeof(arr[0])
        )
    );
}