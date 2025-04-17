#include <stdio.h>
// write a program in c to take three subject marks
// and if the sum of all the three marks are less 
// than 40 then fail and if more than 40 than pass.
int main(){
    int maths,science,computer;
    float sum;
    printf("Enter Maths Marks : ");
    scanf("%d", &maths);
    printf("Enter Science Marks : ");
    scanf("%d", &science);
    printf("Enter Computer Marks : ");
    scanf("%d", &computer);
    sum = maths+science+computer/3;
    if (sum<40){
        printf("You are Fail. Your Percentage %f", sum);
    }
    else if(sum>=40){
        printf("You are Pass. Your percentage %f", sum);
    }

    return 0;
}