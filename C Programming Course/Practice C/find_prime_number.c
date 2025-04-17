#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n) {
    // If number is less than or equal to 1, it's not prime
    if (n <= 1) {
        return 0; // False
    }
    
    // Check divisibility from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // False, number is divisible by i
        }
    }
    
    return 1; // True, number is prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}

