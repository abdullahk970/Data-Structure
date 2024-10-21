#include<stdio.h>
#include<conio.h>
int main(){
	int num[]={24,34,12,44,56,17};
	int i =0;
	while(i<=5){
		printf("Element no.%d\n",num[i]);
		printf("Address= %u\n",&num[i]);
		i++;
	}
}
