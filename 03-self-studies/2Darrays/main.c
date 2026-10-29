#include <stdio.h>

int main() {
    // 2D Arrays -> An array where each element is an array
    //              array[][] = {{}, {}, {}};

    int numbers[][3] = {{7, 2, 3},
                    {4, 5, 1},
                    {6, 8, 9}};

    for (int i = 0; i < 3; i++) { //row
        for (int j = 0; j < 3; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n"); // Does the same as what we have below

    }

    // printf("%d ", numbers[0][0]); Will give us row | column, so row 0 and column 0 is 1
    return 0;
}