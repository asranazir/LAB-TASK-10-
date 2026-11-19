#include <stdio.h>

struct Item {
char name[20];
float price;
int qty;
};
float billTotal(struct Item list[], int n) {
	//added base function
    if (n == 0) {
        return 0;
    }
    //put n-1 instead of n
return list[n-1].price * list[n-1].qty + billTotal(list, n - 1);
}

int main() {
	//put struct
struct Item cart[3];
int i;
//remove "=" sign
for (i = 0; i< 3; i++) {
printf("Enter item name: ");
scanf("%s", cart[i].name);

printf("Enter price and quantity:");
//here put "&"
scanf("%f %d", &cart[i].price, &cart[i].qty);
}
//here put %.2f instead of %d 
printf("Total bill: %.2f\n", billTotal(cart, 3));
return 0;
}
