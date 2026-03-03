// 9. Multiplication Table
// - Ask the user to enter an integer.
// - Print the multiplication table for that number from 1 to 10.

#include "stdio.h"

void printTable(int n) {
    for (int i = 1; i <= 10; ++i)
    printf("%d * %d = %d\n", n, i, n * i);
}

int main() {
    int myNum1;
    printf("Enter a number:");
        scanf("%d", &myNum1);
    printTable(myNum1);
    int n = myNum1;
    return 0;
}