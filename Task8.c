#include <stdio.h>

struct Order {
    int orderID;
    char name[20];
    float amount;
    char status;
};

void tryDiscount(struct Order o) {
    if (o.amount >= 2000) {
        o.amount = o.amount - (o.amount * 0.10);
    }
}

void applyDiscount(struct Order *o) {
    if (o->amount >= 2000) {
        o->amount = o->amount - (o->amount * 0.10);
        o->status = 'D';
    }
    else {
        o->status = 'P';
    }
}

int main() {

    struct Order orders[3] = {
        {1501, "Hamza", 2500.00, 'P'},
        {1502, "Ayesha", 1800.00, 'P'},
        {1503, "Bilal", 3200.00, 'P'}
    };

    tryDiscount(orders[0]);

    printf("After tryDiscount: %.2f\n", orders[0].amount);

    float total = 0;

    for (int i = 0; i < 3; i++) {
        applyDiscount(&orders[i]);

        printf("%d | %s | Rs %.2f | %c\n", orders[i].orderID, orders[i].name, orders[i].amount, orders[i].status);

        total = total + orders[i].amount;
    }

    printf("Total: Rs %.2f\n", total);

    return 0;
}

