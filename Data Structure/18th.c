#include<stdio.h>
#include<conio.h>
int main(){
	int num[]= {24,34,12,44,56,17};
	int i= 0,*j;
	j= &num[0];
	while(i<=5){
		printf("Address =%u\n",&num[i]);
		printf("Element=%d\n",*j);
		i++;
		j++;
	}
}
