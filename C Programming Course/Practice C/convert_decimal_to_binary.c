#include <stdio.h> // Header for taking input and showing output

void decimalToBinary(int n) { // function to get decimal to binary
    for (int i = 31; i >= 0; i--)
        printf("%d", (n >> i) & 1);
}

int main() { // main function or execution starts here
    int decimalNumber; // Initializing a integer variable to store decimal number
    printf("Enter a decimal number: "); // input statement printing
    scanf("%d", &decimalNumber); // scanning for keyboard responses
    printf("Binary: "); // printing the result with string "Binary : <result_from_void_decimaltoBinary()>"
    decimalToBinary(decimalNumber); // calling the function made above "decimaltoBinary()"
    return 0; // At last returning 0 to the function main()
}
