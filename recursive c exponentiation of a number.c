#include <stdio.h>
#include <stdlib.h>

int exponentiation(int exponent, int base)
{
    int result;
    if (exponent == 0)
    {
        result = 1;
    }
    else
    {
        result = base * exponentiation(exponent - 1, base);
    }

    return result;
}

int main()
{
    int exponent, base;
    printf("Please Enter Base Number:");
    scanf("%d", &base);

    printf("Plase Enter Exponent Number:");
    scanf("%d", &exponent);

    printf("%d to the power of %d=%d", base, exponent, exponentiation(exponent, base));

    return 0;
}