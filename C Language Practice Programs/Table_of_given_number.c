#include <stdio.h>

int main(){
    // Taking input from user to print table of it
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);

    for (int i=1;i<=10;i++)
        printf("%d x %d = %d\n", number, i, number*i);

    printf("\nProgram Executed Successfully");    
}