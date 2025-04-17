#include <stdio.h>
// To get force of attraction on a body
// of mass m exerted by earth gravity
int main(){
    int mass;
    printf("Enter Mass (Kg) : ");
    scanf("%d", &mass);
    float force = mass * 9.8;
    printf("Force on %dkg body will be %.1f N", mass, force);
    return 0;
}