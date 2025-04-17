#include <stdio.h> // including header file {standard input output file in header}

int main() // main() function starts here
{
    int number; // Taking input from user
    printf("Enter the Number : "); // printing input statement
    scanf("%d", &number); // scaning for keyboard interuption na input also
    for (int i = 0; i <= 10; i++){ // for loop from 1 to 10 with gap of 1
        int table = number * i; // storing value in a variable name table
        printf("%d x %d = %d\n", number, i, table); // at last printing the table one by one / line by line
    }
    return 0; // returning 0 to the function which is main()
}