#include <stdio.h>
/*calculate income tax paid by an employee
 to the government as per the slabs mentioned below
 
 Income         Tax
 0 - 2.5L       0%
 2.5L - 5.0L    5%
 5.0L - 10.0L   20%
 Above 10.0L    30%*/

int main(){
    int income, tax;
    printf("Enter Income (in lakh) : ");
    scanf("%d", &income);
    if (income<250000){
        printf("Income : %d\n", income);
        printf("Tax : %d", income*0/100);
    }
    else if (income<=500000 || income>250000){
        printf("Income : %d\n", income);
        printf("Tax : %d", income*5/100);
    }
    else if (income<1000000 || income>500000){
        printf("Income : %d\n", income);
        printf("Tax : %d", income*20/100);
    }
    else if (income>1000000){
        printf("Income : %d\n", income);
        printf("Tax : %d", income*30/100);
    }
}