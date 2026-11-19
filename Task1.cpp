#include <stdio.h>
void reverse(int n)
{
    if (n == 0)
        return;

    printf("%d", n % 10);
    reverse(n / 10);
}

int evenSum(int n)
{
    if (n == 0)
        return 0;

    int digit = n % 10;

    if (digit % 2 == 0)
        return digit + evenSum(n / 10);
    else
        return evenSum(n / 10);
}

int main()
{
    int roll;

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Locker code: ");
    reverse(roll);

    printf("\nEven-digit checksum: %d", evenSum(roll));

    return 0;
}

