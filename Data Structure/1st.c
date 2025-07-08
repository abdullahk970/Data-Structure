#include<stdio.h>
#include<string.h>

int main() {
    char *string1 = "1234567890";
    char *string2 = "123DC8";
    int length;

    length = strspn(string1, string2);
    printf("Abdullah Khan: %d\n", length);
    printf("Abdullah Khan: %d\n", length);

    return 0;
}

