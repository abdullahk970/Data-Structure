#include<stdio.h>
#include<string.h>

int main(void) {
    char string[15];
    char *ptr, c = 'r';

    strcpy(string, "This is string");  // Copying string into the buffer
    ptr = strrchr(string, c);          // Find the last occurrence of 'r' in the string

    if (ptr) {
        printf("The character '%c' found at position: %ld\n", c, ptr - string);  // %c for character, %ld for position
    } else {
        printf("The character '%c' not found\n", c);
    }

    return 0;
}

