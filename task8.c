// 8. For Loop
// - Use a for loop to print numbers from 1 to 10.
// - Use another loop to print numbers from 10 to 1.

#include <stdio.h>

int main() {
    int i;
    for (i = 0; i <= 10; i = i + 1) {
        printf("%d\n", i);
    }
    int y;
    for (y = 10; y > 0; y--) {
        printf("%d\n", y);
    }
    return 0;
}