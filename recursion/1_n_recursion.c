#include<stdio.h>

// Function to print numbers from 1 to n
void increasing(int current, int n) {
    if (current > n) // Base case: stop when current exceeds n
        return;
    printf("%d\n", current); // Print the current number
    increasing(current + 1, n); // Recursive call with incremented value
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    increasing(1, n); // Start the recursion from 1
    return 0;
}
