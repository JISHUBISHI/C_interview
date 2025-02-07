#include <stdio.h>
int isEven(int num) {
    if (num == 0) {
        return 1;
    } else if (num == 1) {
        return 0; 
    }
    
    
    return isEven(num - 2);
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) {
        number = -number;
    }

    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
    
    return 0;
}
