#include <stdio.h>

int main(){
    int number, factorial=1, fac;
    printf("Enter a Number: ");
    scanf("%d", &number);

    for (int i=number;i>=1;i--){
        factorial *= i;
    }
    printf("Factorial of %d is %d", number, factorial);
}