#include<stdio.h>
int main(void){
	int c;
	//Note that getchar reads from stdin & is line buffered. This means it will not return until you press ENTER.
	while((c = getchar())!='\n')
	printf("%c",c);
	return 0;
}
