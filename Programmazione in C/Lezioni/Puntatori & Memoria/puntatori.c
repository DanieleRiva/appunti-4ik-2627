#include <stdio.h>

void clear()
{
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
    }
}

// Dichiarazione di un puntatore
void esempio1()
{
    int age = 20;
    int *p = &age;
    
    printf("%d \n", age);
    printf("%p \n", &age);
    printf("%p", p);

    // int v[] = { 1, 2 };
    // swap(v);
    // printf("\n %d %d", v[0], v[1]);
}

// DEREFERENZIAZIONE
void esempio2()
{
    int i = 50;
    int *pi = &i;

    printf("%d \n", i);
    printf("%p \n", pi);
    printf("%p \n", i);

    int a = 500;
    int *pa = &a;

    // Restituisce 500
    printf("%d \n", *pa);

    // *&a -> a = 500, &a = Address, *&a = 500
    printf("%d \n", *&a);

    // &*pa -> pa = Address, *pa = 500, &*pa = Address
    printf("%p \n", &*pa);

    // int x = 10;
    // float *px = &x;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("Swap \t x: %d, y: %d \n", *x, *y);
}

// Operatore sizeof()
void esempio3(int arr1[], int dim)
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d \n", sizeof(arr) / sizeof(arr[0]));

    // int *p; - printf di p
    printf("%d \n", sizeof(int *));
}

// Operazioni sui puntatori
void esempio4()
{
    int i = 10;
    int *pi = &i;
    int j = 50;
    int *pj = &j;

    printf("%p \n", pi);
    printf("%d \n", *pi);
    pi = pi + 1;
    printf("%p \n", pi);
    printf("%d \n", *pi);
    pi = pi - 1;
    printf("%p \n", pi);
    printf("%d \n", *pi);

    printf("\n\n");

    int arr[] = {1, 2, 3};
    // int *pArr = &arr[0];
    int *pArr = arr;
    printf("%d \n", *pArr);
    pArr = pArr + 1;
    printf("%d \n", *pArr);
    pArr = pArr + 1;
    printf("%d \n", *pArr);

    pArr = arr;

    *(pArr + 2) = 5;

    int v[] = {2, 5, 5, 8, 10, 13, 16};
    int *pv = v;

    // Controllare se cella 1 e 2 sono uguali
    if (*(pv + 1) == *(pv + 2))
    {
        printf("UGUALI \n");
    }

    // Trovare il massimo dell'array
    int dim = sizeof(v) / sizeof(v[0]);
    int max = *pv;

    for (int count = 0; count < dim; count++)
    {
        if (*pv > max)
        {
            max = *pv;
        }

        pv = pv + count;
    }

    printf("MAX: %d \n", max);
}

void esempio5()
{
    int i = 5;
    // Puntatore alla variabile i
    int *pi = &i;
    // Puntatore alla variabile pi che punta alla variabile i
    int **ppi = &pi;

    printf("pi: %p\n", pi);
    printf("*pi: %d\n", *pi);
}

void esempio6()
{
    int *p = NULL;

    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(int *));

    void *pt;
    int i = 5;
    pt = &i;

    // NULL è definito come (void *) 0
    int x = 0;
    void *null = &x;
}

// Array di puntatori
void esempio7()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *pArr = &arr[0];

    int *arr2[5] = {NULL};
    int **pArr2 = &arr2[0];

    // Riempire arr2 con gli hex di arr
    int dim = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < dim; i++)
    {
        *(pArr2 + i) = pArr + i;
    }

    for (int i = 0; i < dim; i++)
    {
        printf("%d ", *(pArr + i));
    }
    printf("\n\n");
    for (int i = 0; i < dim; i++)
    {
        printf("%p ", (pArr + i));
    }
    printf("\n\n");
    for (int i = 0; i < dim; i++)
    {
        printf("%p ", *(pArr2 + i));
    }
}

void main()
{
    esempio7();
}