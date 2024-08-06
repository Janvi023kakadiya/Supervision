#include <stdio.h>

int main() {
    FILE *sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Could not open file source.txt\n");
        return 1;
    }
    
    FILE *destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Could not open file destination.txt\n");
        fclose(sourceFile);
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}
