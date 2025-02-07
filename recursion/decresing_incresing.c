#include <stdio.h>
void printDecreasing(int n) {
    if (n < 1) {
        return;
    }
    printf("%d\n", n);
    printDecreasing(n - 1);
}
void printIncreasing(int n) {
    if (n < 1) {
        return;
    }
    printIncreasing(n - 1);
    printf("%d\n", n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printDecreasing(n);
    printf("\n");

    printIncreasing(n);
    printf("\n");

    return 0;
}
