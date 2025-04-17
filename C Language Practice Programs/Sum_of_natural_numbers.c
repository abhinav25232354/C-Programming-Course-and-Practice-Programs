#include <stdio.h>

int main(){
    // Taking user input
    int number, sum=0;
    printf("From where to where you want addition of a number e.g., 10 will give 1+2+3+4+5+6+7+8+9+10");
    printf("\nEnter Number: ");
    scanf("%d", &number);

    for (int i=1;i<=number;i++){
        sum += i;
    }
    printf("Sum of %d numbers is %d", number, sum);
    return 0;
}