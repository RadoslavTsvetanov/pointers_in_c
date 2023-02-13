#include <stdio.h>
int compareasc(void *a, void *b)
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
int comparedesc(void *a, void *b)
{
    if (*(int *)a < *(int *)b)
    {
        return 1;
    }
    else if (*(int *)a > *(int *)b)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    int a = 5;
    int b = 7;
    void *p1 = &a;
    void *p2 = &b;
    printf("%d", compareasc(p1, p2));
    printf("%d", comparedesc(p1, p2));
}