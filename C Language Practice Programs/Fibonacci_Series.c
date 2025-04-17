#include <stdio.h>

int main(){
    int num,a=0,b=1,c;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d %d ", a, b);
    for (int i=0;i<num;i++){
        printf("%d", c);
        c = a+b;
        a = b;
        b = c;
    }
    // printf("Fibonacci Series Upto %d numbers is\n", num);
}