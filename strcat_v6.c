#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s%s", &a, &b);

    strcat(b, a); // concat in b by a

    printf("%s %s", a, b);
    return 0;
}