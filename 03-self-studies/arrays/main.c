#include <stdio.h>

int main() {
    int numbers[] = {100, 85, 50, 40};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    printf("%d\n", numbers[0]);
    printf("%c\n", grades[0]);
    for (int i = 0; i < 5; i++) {
        printf("%c\n", grades[i]);
    }
    return 0;
}