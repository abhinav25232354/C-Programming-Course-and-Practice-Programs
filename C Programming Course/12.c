#include <stdio.h>
// Program to find average of three numbers
void average(a,b,c){
    float d = (a+b+c)/3;
    printf("Average of %d,%d,%d = %f", a,b,c, d);
}
int main(){
    average(6,2,2);
    return 0;

    /*1+2+3/3*/
}