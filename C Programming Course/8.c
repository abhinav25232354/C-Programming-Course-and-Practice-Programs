#include <stdio.h>
// write a program in c to print 
// multiplication of number (n) using loop in reverse order

int main(){
    int number, i;
    printf("Enter a Number : ");
    scanf("%d", &number);

    for (i=10; i>=1; i--){
        int table = number*i;
        printf("%d x %d = %d\n", number, i, table);
    }
    return 0;
}