#include <stdio.h>
#include <stdlib.h>

int fun(int a, int b)
{
    int result;
    if (a == 0)
    {
        return 0;
    }
    else if (a - b == 0)
    {
        return 1;
    }
    else if (a < b)
    {
        return 0;
    }

    else
    {
        return (1 + fun(a - b, b));
    }
}

int main()
{
    int a, b;
    printf("please enter the divided number:");
    scanf("%d", &a);

    printf("please enter the divisor number:");
    scanf("%d", &b);

    printf("%d divided by %d=%d\n", a, b, fun(a, b));
    printf("remaining number=%d", a - fun(a, b) * b);

    return 0;
}