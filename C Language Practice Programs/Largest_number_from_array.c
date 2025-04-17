#include <stdio.h>

int main()
{
    int arr[] = {102, 2323, 34, 354};
    int max = 0;

    for (int i=0;i<=3;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}
