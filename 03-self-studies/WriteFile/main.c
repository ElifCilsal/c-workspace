#include <stdio.h>

int main() {

    FILE *pFile = fopen("output1.txt", "w");

    char text[] = "Fuzzy wuzzy was a bear, Fuzzy Wuzzy had no hair";
    if (pFile == NULL) {
        printf("Error.\n");
        return 1;
    }
    fprintf(pFile, "%s", text);
    printf("Done!");
    fclose(pFile);

    return 0;
}