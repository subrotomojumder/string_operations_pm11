#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s%s", &a, &b);
    for (int i = 0; i <= (int)strlen(b); i++)
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}