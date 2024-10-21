#include<stdio.h>
#include<string.h>

int main(void) {
    char input[16] = "abcd";  // Sample input string
    char *p;

    // strtok expects a delimiter, so let's use a space for this example
    p = strtok(input, " ");   // First tokenization call

    if (p) 
        printf("%s\n", p);    // Print the first token

    // Continue tokenizing the rest of the string
    p = strtok(NULL, " ");    // Subsequent call to strtok

    if (p) 
        printf("%s\n", p);    // Print the next token if present

    return 0;
}

