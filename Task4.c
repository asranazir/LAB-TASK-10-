#include <stdio.h>

void show(int n) {
    if (n == 0)
        return;

    printf("%d", n);
    show(n - 1);
    printf("%d", n);
}

int f(int n) {
    static int c = 0;
    c++;

    if (n <= 0)
        return c;

    return f(n - 2);
}

int main() {
    show(3);
    printf("\n");

    int x = f(7);
    printf("%d\n", x);

    int y = f(2);
    printf("%d\n", y);

    return 0;
}
/*output:
321123
5
7*/
