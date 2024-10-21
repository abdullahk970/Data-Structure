#include<stdio.h>
#include<string.h>
int main(){
	char string[10];
	char *str1 ="abcdefgh";
	strcpy(string,str1);
	printf("%s\n",string);
	return 0;
}
