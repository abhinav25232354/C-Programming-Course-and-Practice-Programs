#include <stdio.h>
// Adding two numbers
void starting(){
    char name = 'A';
    printf("Hello world\n");
    printf("I am %c", name);
    return 0;
}
int main(){
    // create a program to add two numbers in c
    int a,b,sum;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    sum = a+b;
    printf("Addition : %d", sum);
}