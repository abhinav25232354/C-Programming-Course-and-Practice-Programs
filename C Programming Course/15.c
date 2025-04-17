#include <stdio.h>
// Fibonacci series (Consider using function)
void fibonacci();
int main(){
    fibonacci();
}
void fibonacci(){
    int a = 0;
    int b = 1;
    int i;
    int c;
    for (i=0; i<=10; i++){
        printf("%d\n", a);
        c = b+a;
        a = b;
        b = c;
    }
    return 0;
}