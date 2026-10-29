#include <stdio.h>

int main() {
    int points[5] = {0};
    for (int i = 0; i < 5; i++) {
        printf("Enter point:");
        scanf("%d", &points[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", points[i]);
    }
    return 0;
}