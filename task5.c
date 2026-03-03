// 5. If / Else
// - Ask the user to enter an integer.
// - If the number is positive, print "Positive".
// - If the number is negative, print "Negative".
// - If the number is 0, print "Zero".

#include<stdio.h>

int myNum;

int main() {
    printf("Enter a number: ");
        scanf( "%d", &myNum);
    if (myNum > 1) {
        printf("The number is positive");
    }
else if (myNum < -1) {
    printf("The number is negative");
}
    else if (myNum == 0) {
        printf("The number is zero");
    }

    return 0;
}