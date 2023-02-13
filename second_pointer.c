#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[50];
    char *b;
    fgets(a, 50, stdin);
    b = strchr(a, '\n');
    if (b != NULL)
    {
        *b = '\0';
    }
    printf("%c", *b);
    return 0;
}