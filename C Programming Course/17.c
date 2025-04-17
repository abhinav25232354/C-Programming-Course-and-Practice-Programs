#include <stdio.h>
// Matrix Multiplication
void matrix1(int row1,int row2);
void matrix2(int row1,int row2);
int main(){
    matrix1();
}

void matrix1(int row1,int row2){
    int i,j;
    for (i=0;i<=2;i++){
        matrix2(row1,row2);
        for (j=0;j<=i;j++);
    }
}
void matrix2(int row1,int row2){}