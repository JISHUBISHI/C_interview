#include<stdio.h>

void printTable(int num, int multiplier) {
    if (multiplier > 10) {
        return; 
    }
    printf("%d x %d = %d\n", num, multiplier, num * multiplier);
    printTable(num, multiplier + 1); 
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printTable(n,1);
    return 0;
}
