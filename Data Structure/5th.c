#include<stdio.h>
#include<string.h>
int main(){
	char *str1 = "Borland International";
	char *str2 = "nation",*ptr;
	ptr= strstr(str1,str2);
	printf("The substring is: %s\n",ptr);
	return 0;
}
