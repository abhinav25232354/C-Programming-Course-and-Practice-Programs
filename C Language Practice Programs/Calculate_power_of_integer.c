#include <stdio.h>

int main(){
    // Taking input from user for further inspection
    int num, pow, result;
    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter Power: ");
    scanf("%d", &pow);

    for(int i=0;i<=pow;i++){
        result = num * num;
    }
    printf("%d", result);
    return 0;
}