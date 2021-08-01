#include <stdio.h>

int main() {
    int a = 42;
    double b = 1337;
    int c = a & b;

    a %= 3;

    if (a > 50) {
        scanf("%d", &c)
    } else {
        printf("Hello World! %d - %f\n", a, b);
        printf("B: %f\n", b)
    }

    return 0;
}