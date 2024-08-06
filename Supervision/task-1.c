#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Could not open file sample.txt\n");
        return 1;
    }
    fclose(file);
    return 0;
}
