#include <stdio.h>

int main() {
    char fruits[][10] = {"Mango", "Kiwi", "Raspberry"}; // Array of Strings

    char fruit[][10] = {
        {'M', 'a', 'n', 'g', 'o', '\0', '\0', '\0', '\0'},
        {'K', 'i', 'w', 'i', '\0', '\0', '\0', '\0', '\0'},
        {'R', 'a', 's', 'p', 'b', 'e', 'r', 'r', 'y'}
    }; // 2D Array
    for (int i = 0; i < 3; i++) {
        printf("%s ", fruits[i]);
    }
    return 0;
}