
#include <stdio.h>

const int FINE_PER_DAY = 20;

struct Member {
    char name[20];
    int id;
};

struct Date {
    int day;
    int month;
    int year;
};

struct Book {
    char bookName[30];
    struct Member member;
    struct Date due;
    struct Date returned;
};

int convertToDays(struct Date d) {
    return d.year * 360 + d.month * 30 + d.day;
}

int main() {
    struct Book books[4] = {
        {"C Programming", {"Ali", 101}, {10, 11, 2026}, {15, 11, 2026}},
        {"Data Structures", {"Sara", 102}, {28, 11, 2026}, {2, 12, 2026}},
        {"Discrete Math", {"Usman", 103}, {20, 12, 2026}, {18, 12, 2026}},
        {"Calculus", {"Hira", 104}, {29, 12, 2026}, {2, 1, 2027}}
    };

    int lateDays, fine;
    int totalFine = 0;

    for (int i = 0; i < 4; i++) {

        lateDays = convertToDays(books[i].returned)
                 - convertToDays(books[i].due);

        if (lateDays > 0) {
            fine = lateDays * FINE_PER_DAY;
        }
        else {
            lateDays = 0;
            fine = 0;
        }

        totalFine = totalFine + fine;

        printf("%s | %s (%d) | Late: %d days | Fine: Rs %d\n", books[i].bookName,
               books[i].member.name,
               books[i].member.id,
               lateDays,
               fine);
    }

    printf("Total fine collected: Rs %d\n", totalFine);

    return 0;
}

