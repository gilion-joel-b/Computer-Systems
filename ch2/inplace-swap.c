#include <stdio.h>

void inplace_swap(int* x, int* y)
{
    *y = *x ^ *y; /*Step1*/
    *x = *x ^ *y; /*Step2*/
    *y = *x ^ *y; /*Step3*/
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1;
        first <= last;
        first++, last--)
        inplace_swap(&a[first], &a[last]);
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6 };
    reverse_array(a, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", a[i]);
    return 0;
}
