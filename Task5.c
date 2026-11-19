
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isMirror(char str[], int left, int right)
{
    while (left < right && !isalnum((unsigned char)str[left]))
        left++;

    while (left < right && !isalnum((unsigned char)str[right]))
        right--;

    if (left >= right)
        return 1;

    if (tolower((unsigned char)str[left]) !=
        tolower((unsigned char)str[right]))
        return 0;

    return isMirror(str, left + 1, right - 1);
}

int main()
{
    char code[200];

    printf("Enter code: ");
    fgets(code, sizeof(code), stdin);

    if (isMirror(code, 0, strlen(code) - 1))
        printf("MIRROR CODE: Handle with care");
    else
        printf("Normal box");

    return 0;
}

