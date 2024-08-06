#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Could not open file output.txt\n");
        return 1;
    }
    fprintf(file, "Hello, Your name with greeting !");
    fclose(file);
    return 0;
}
