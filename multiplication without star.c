#include <stdio.h>
#include <stdlib.h>
int fun(int a, int b)
{
    int result;
    if (a == 0 || b == 0)
    {
        return 0;
    }
    else
    {
        result = a + fun(a, b - 1);
    }
}

int main()
{
    int a, b, result;
    printf("please enter first number:");
    scanf("%d", &a);

    printf("please enter second number:");
    scanf("%d", &b);

    printf("%d multiply by %d=%d", a, b, fun(a, b));

    return 0;
}