#include <stdio.h>
#include <string.h>

void graduation(char name[], int age) {
    printf("Happy graduation to you!\n");
    printf("Happy graduation dear %s!\n", name);
    printf("You managed to finally graduate at %d.\n", age);
}

int main() {
    char name[50] = "";
    int age = 0;

    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age:");
    scanf("%d", &age);

    graduation(name, age);
    return 0;

}