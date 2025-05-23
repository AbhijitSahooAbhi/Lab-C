#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next, i;
    
    printf("Fibonacci Sequence: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacci(n);
    }

    return 0;
}

