#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 0;
    printf("Number of students:");
    scanf("%d", &number);
    int *ranks = malloc(number * sizeof(int));

    if (ranks == NULL) {
        printf("Error.\n");
        return 1;
    }
    for (int i = 0; i < number; i++) {
        printf("Rank %d:", i+1);
        scanf("%d", &ranks[i]);
    }
    for (int i = 0; i < number; i++) {
        printf("%d ", ranks[i]);
    }
    free(ranks);
    ranks = NULL;

    return 0;
}