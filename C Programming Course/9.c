#include <stdio.h>
// Sum of first 10 natural number using while loop
// (Natural Numbers : 1-∞)

int main(){
    int i = 1;
    int sum = 0;
    while (i<=10){
        sum += i;
        i++;
    }
    printf("Your 10 natural number sum is %d", sum);
    return 0;
}