#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("document.txt", "r");
    if (file == NULL) {
        printf("Could not open file document.txt\n");
        return 1;
    }
    
    int count = 0;
    char ch;
    char prevCh = ' ';
    
    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch) && !isspace(prevCh)) {
            count++;
        }
        prevCh = ch;
    }
    
    if (!isspace(prevCh)) {
        count++;
    }
    
    fclose(file);
    
    printf("The number of words in document.txt is %d\n", count);
    return 0;
}
