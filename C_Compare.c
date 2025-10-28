#include <stdio.h>
#include <string.h>
int main()
{
    char X[21], Y[21];
    scanf("%s %s", &X, &Y);
    int val = strcmp(X, Y);
    if (0 > val)
    {
        printf("%s", X);
    }
    else if (0 == val)
    {
        printf("%s\n%s", X, Y);
    }
    else if (0 < val)
    {
        printf("%s", Y);
    }

    // printf("%s\n%s", X, Y);
    // int i = 0;
    // while (1)
    // {
    //     if (X[i] == '\0' && X[i] == '\0')
    //     {
    //         printf("%s\n%s", X, Y);
    //         break;
    //     }
    //     else if (X[i] == '\0')
    //     {
    //         printf("%s", X);
    //         break;
    //     }
    //     else if (Y[i] == '\0')
    //     {
    //         printf("%s", Y);
    //         break;
    //     }
    //     else if (X[i] < Y[i])
    //     {
    //         printf("%s", X);
    //         break;
    //     }
    //     else if (X[i] > Y[i])
    //     {
    //         printf("%s", Y);
    //         break;
    //     }
    //     else if (X[i] == X[i])
    //     {
    //         i++;
    //     }
    // }
    return 0;
}