#include <stdio.h>
// Convert celcius in farenheit
int main(){
    int Celsius;
    printf("Enter Temperature (C`) : ");
    scanf("%d", &Celsius);
    int Fahrenheit = (Celsius * 9/5) + 32;
    printf("(C`%d) in (F`) = %d", Celsius, Fahrenheit);
    return 0;
}