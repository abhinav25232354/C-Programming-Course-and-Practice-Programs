#include <stdio.h>

void star_pattern(){
    int rows, i, j;
    printf("Enter Rows : ");
    scanf("%d", &rows);
    for (i=1;i<=rows;i++){
        for (j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
}
int main(){
    star_pattern();
}