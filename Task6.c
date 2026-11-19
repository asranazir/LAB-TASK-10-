#include <stdio.h>

struct Batter {
    char name[20];
    int runs;
    int balls;
};

int main() {
    struct Batter player[5] = {
        {"Babar", 78, 52},
        {"Rizwan", 45, 40},
        {"Fakhar", 0, 0},
        {"Shadab", 23, 9},
        {"Saim", 12, 15}
    };

    int total = 0;
    int top = 0;
    int best = -1;

    float sr;

    for (int i = 0; i < 5; i++) {
        total = total + player[i].runs;

        if (player[i].runs > player[top].runs) {
            top = i;
        }

        if (player[i].balls == 0) {
            printf("%s %2d (%2d) SR: DNB\n",player[i].name, player[i].runs, player[i].balls);
        }
        else {
            sr = (player[i].runs * 100.0) / player[i].balls;

            printf("%s %2d (%2d) SR: %.2f\n", player[i].name, player[i].runs, player[i].balls, sr);

            if (best == -1 ||
                sr > (player[best].runs * 100.0) / player[best].balls) {
                best = i;
            }
        }
    }

    printf("Team total: %d\n", total);

    printf("Top scorer: %s (%d)\n", player[top].name, player[top].runs);

    printf("Best strike rate: %s (%.2f)\n", player[best].name, (player[best].runs * 100.0) / player[best].balls);

    return 0;
}

