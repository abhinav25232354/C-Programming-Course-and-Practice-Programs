#include <stdio.h>
/*write a program in c to determine whether a 
character entered by the user is lowercase or not*/

int main(){
    // ASCII (American Standard Code for Information Interchange)
    //asciitable.com
    // decimal values from 97-122(lowercase character)
    char character;
    printf("Enter a character : ");
    scanf("%c", &character);

    if (character<=122 && character>=97){
        printf("It is Lowercase Character");
    }
    else{
        printf("It is Uppercase Character");
    }
}