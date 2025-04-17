#include <stdio.h> // calling header file from the c directory {standarad input output file}

int main(){ // main function starts here
    int number, sum = 0; // initializing variables number{which gets "n" number value} sum intializing with zero(0) to sum all the numbers iterated by for loop
    printf("Enter n (last number 0-n) Number : "); // printing the input statement
    scanf("%d", &number); // scanning the keyboard interuption to store value in the variable number

    for (int i=0;i<=number;i++){ // iterating for loop till number means (n) value
        sum += i; // sum + i{iterated value}
    }
    printf("Sum of Natural Numbers from %d to %d is %d", 0, number, sum);
    // printing the values obtained from the program
    return 0; // returning the 0 integer to the main() function
}