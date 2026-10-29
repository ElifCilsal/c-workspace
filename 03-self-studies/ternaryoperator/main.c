#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isHome = 1;
    printf("%s\n", (isHome) ? "Home" : "Not Home");

    int number = 6;
    printf("%d is %s.\n", number, (number % 2 == 0) ? "even" : "odd");

    int m = 4;
    int n = 5;
    int min = (m < n) ?m:n;
    printf("%d\n", min);

    return 0;
}