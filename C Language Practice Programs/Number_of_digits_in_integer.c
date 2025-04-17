#include <stdio.h>
// Using mathematics algorithm
int main(){
    int num, count;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num==0){
        printf("There is 1 Digit in your number");
    }
    else{
    while (num!=0){
        num /= 10;
        count += 1;
    }
    }
    printf("There are %d digits in your number", count);
}