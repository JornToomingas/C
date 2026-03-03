// 1. Prime Checker
// - Ask the user to enter a number.
// - Check if it is a prime number using a for loop and if statements.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int myNum;
        printf("Enter a number: ");
        scanf("%d", &myNum);
    int cnt = 0;

    if (myNum <= 1)
        printf("%d is not prime!", myNum);
    else {
        for (int i = 1; i <=myNum; i++) {
            if (myNum % i == 0)
                cnt++;
        }

        if (cnt > 2)
            printf("%d is not prime!", myNum);
        else
            printf("%d is prime!", myNum);
    }
    return 0;
}
