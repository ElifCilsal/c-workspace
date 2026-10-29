#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;
}Car;

int main() {
    Car cars[] = {{"Mustang", 2024, 15000},
                  {"Ferrari", 2020, 810000},
                  {"Dogan", 1980, 1000},
                  {"Fiat", 1999, 4400}};
    int numbers = sizeof(cars) / sizeof(cars[0]);
    for (int i = 0; i < numbers; i++) {
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }
    return 0;
}