#include <stdio.h>

static int calls = 0;

int ways(int n)
{
    calls++;

    if (n == 0)
        return 1;

    if (n == 1)
        return 1;

    return ways(n - 1) + ways(n - 2);
}

int main()
{
    int n, result;

    printf("Enter number of stairs: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid number of stairs!");
        return 0;
    }

    result = ways(n);

    printf("n = %d | ways = %d | calls = %d", n, result, calls);

    return 0;
}
