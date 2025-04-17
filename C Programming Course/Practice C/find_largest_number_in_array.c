#include <stdio.h> // calling header file {standard input output files}

int findMax(int array[], int length){ // making a custom function in int not void bcoz of integer return in the parameters
    int max = 0; // Initializing variable max with 0
    for(int i=0;i<=length;i++){ // starting for loop from 0 to the length of the array
        if (array[i]>max){ // if statement without else works, if array element is greater than max (0) then
            max = array[i]; //store the array[i] value in the variable max
        } // ends if statement
    }
    return max; // return max value to the function to call in in another function
}
int main(){ // Here, starts main function int main(){}
    int array[] = {1,12,32,43,454}; // Intializing array with no limit, and storing only integer values
    int max = findMax(array, 4); // max variable to store result from function findMax() in int data type
    printf("Max number in this array is %d", max); // printing value of maximum from the array
    return 0; // return 0 as no integer from the function would create Error
}