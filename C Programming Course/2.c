#include <stdio.h>

// check whether a numeber is divisible by 97 or not
int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    if (num%2 == 0)
        printf("It is Divisible by 2");
    
    else
        printf("It is not divisible by 2");
    
}