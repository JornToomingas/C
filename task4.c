// 4. User Input
// - Ask the user to enter an integer.
// - Print the number back to the user.
// - Print the number multiplied by 2.

#include <stdio.h>

int myNum;

int main() {
    printf("Enter a number: ");
        scanf( "%d", &myNum);
    printf("User entered:");
    printf("%d\n", myNum);
    printf("The numbered multiplied by 2 = ");
    printf("%d", myNum*2);
    return 0;
}