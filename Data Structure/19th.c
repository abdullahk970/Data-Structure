#include<stdio.h>
#include<conio.h>
int main(){
	int num[]= {24,34,12,44,56,17};
	display(&num[0],6);
}
display(int *j, int n){
	int i= 1;
	while(i<=n){
		printf("Element=%d\n",*j);
		i++;
		j++;
	}
}
