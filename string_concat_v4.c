#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int a_length = strlen(a);
    for (int i = 0; i <= (int)strlen(b); i++)
    {
        // printf("%d", a_length);
        a[i + a_length] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}