#include <stdio.h> // c header file for standard input and output

int main(){ // main function starts here
    int number; // Initializing variable number
    printf("Enter a Number : "); // printing input taking UI string
    scanf("%d", &number); // scanning keyboard response
    if (number%2 == 0){ // if condition for number divided by 2 gives 0 or not
        // If it gives 0 as reminder then the number is even
        printf("It is an Even Number.");
        // print statement for true condition of even number
    }
    else{ // executed after fail of first condition
        // If not then it is a Odd Number
        printf("It is an Odd Number.");
        // print statement if (if) condition is false
    }
    return 0; // 0 as integer returning to the function
}