#include <stdio.h>
int compare(void *a, void *b)
{
    if (*(int *)a > *(int *)b)
    {
        return 1;
    }
    else if (*(int *)a < *(int *)b)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
void bubblesort(int a[], int array_size, int (*compare)(void *, void *))
{
    for (int i = 0; i < array_size; i++)
    {
        for (int j = i; j < array_size - i - 1; j++)
        {
            if ((*compare)((void *)(a + j), (void *)(a + j + 1)) == 1)
            {
                int val = a[j];
                a[j] = a[j + 1];
                a[j + 1] = val;
            }
        }
    }
}
int main(void)
{
    int (*ptr)(void *, void *) = compare;
    int a[7] = {1, 4, 3, 2, 1, 2, 3};
    bubblesort(a, sizeof(a) / sizeof(a[0]), compare);
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d ", a[i]);
    }
}