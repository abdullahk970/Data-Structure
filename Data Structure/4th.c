#include<stdio.h>
#include<string.h>
#include<strings.h> // For strcasecmp()

int main(){
    char *buf1 = "BBB", *buf2 = "bbb";
    int ptr;

    ptr = strcasecmp(buf2, buf1); // Use strcasecmp for case-insensitive comparison

    if(ptr > 0)
        printf("Buf2 is greater than buf1:\n");
    else if(ptr < 0)
        printf("Buf2 is less than buf1:\n");
    else
        printf("Buf2 is equal to buf1:\n");

    return 0;
}

