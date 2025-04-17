#include <stdio.h>
// program to print star pattern
void pattern(int row);
int main(){
    pattern(5);
}
void pattern(int row){
    int i,j;
    for (i=0;i<=row;i++){
        for (j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}