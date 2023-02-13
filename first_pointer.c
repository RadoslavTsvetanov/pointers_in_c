#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int *pointer_to_a = &a;
    int *pointer_to_b = &b;
    printf("%d %p %d %p", *pointer_to_a, pointer_to_a, *pointer_to_b, pointer_to_b);
}