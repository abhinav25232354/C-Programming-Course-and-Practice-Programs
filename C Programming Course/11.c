#include <stdio.h>
// Factorial using for loop
int main(){
    int num;
    int sum = 1, i;
    printf("Enter a Number : ");
    scanf("%d", &num);
    for (i=1; i<=num; i++){
        sum *= i;
    }
    printf("Factorial of %d is %d", num, sum);
    return 0;
}