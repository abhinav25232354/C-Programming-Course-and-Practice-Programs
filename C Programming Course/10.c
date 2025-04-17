#include <stdio.h>

/*Write a program to calculate the sum of 
the numbers occuring in the multiplication
table of 8 (Consider 8x1 to 8x10).*/

int main(){
    int number = 8;
    int sum;
    for (int i=0; i<=10; i++){
        int table = number*i;
        printf("%d x %d = %d\n", number, i, table);
        sum += table;
    }
    printf("Sum : %d", sum);
}