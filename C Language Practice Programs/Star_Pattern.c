/* Half pyramid star pattern print in terminal */
#include <stdio.h>

int main(){
    int num;
    printf("Enter Number of Rows: ");
    scanf("%d", &num);

    for (int i=0;i<=num;i++){
        for (int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}