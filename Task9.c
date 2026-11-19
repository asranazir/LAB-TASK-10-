#include <stdio.h>

const char prefix[] = "FST-";

int nextToken() {
    static int token = 1001;
    return token++;
}

int main() {
    char names[3][30];
    int tokens[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter customer name: ");
        scanf("%29s", names[i]);

        tokens[i] = nextToken();
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%s -> %s%d\n", names[i], prefix, tokens[i]);
    }

    return 0;
}

