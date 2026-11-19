#include <stdio.h>

int isEven(int n);
int isOdd(int n);

int isEven(int n)
{
    printf("(%d)isEven", n);

    if (n == 0)
        return 1;

    printf(" -> ");

    if (n > 0)
        return isOdd(n - 1);
    else
        return isOdd(n + 1);
}

int isOdd(int n)
{
    printf("(%d)isOdd", n);

    if (n == 0)
        return 0;

    printf(" -> ");

    if (n > 0)
        return isEven(n - 1);
    else
        return isEven(n + 1);
}

int main()
{
    int second, result;

    printf("Enter second: ");
    scanf("%d", &second);

    result = isEven(second);

    if (result == 1)
        printf("\nSecond %d: GREEN", second);
    else
        printf("\nSecond %d: RED", second);

    return 0;
}



