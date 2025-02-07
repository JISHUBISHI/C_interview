#include <stdio.h>
double power(int a, int b) {
    if (b == 0) {
        return 1;
    }
    if (b < 0) {
        return 1 / power(a, -b);
    }
    return a * power(a, b - 1); 
}

int main() {
    int base;
    int exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    printf("%.d raised to the power %d is %.d\n", base, exponent, result);

    return 0;
}
