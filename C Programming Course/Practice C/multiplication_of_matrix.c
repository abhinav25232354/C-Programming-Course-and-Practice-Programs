#include <stdio.h>

int main() {
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    // Multiplying matrices
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            result[i][j] = mat1[i][0] * mat2[0][j] + mat1[i][1] * mat2[1][j];

    // Displaying the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
