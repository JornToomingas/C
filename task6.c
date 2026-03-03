// 6. Even or Odd
// - Ask the user to enter an integer.
// - If the number is even, print "Even".
// - If the number is odd, print "Odd".

#include <stdio.h>

int myNum;

int main() {
    printf("Enter a number: ");
    scanf("%d", &myNum);
    if (myNum % 2 == 0) {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }
}