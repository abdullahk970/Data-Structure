#include<stdio.h>
#include<conio.h>
int main(){
	int stud[5][2]={
		{1234,56},
		{1212,33},
		{1434,80},
		{1312,78},
		{1203,75}
	};
	int i;
	for(i=0; i<=4; i++){
		printf("Address of %dth 1-D array= %u\n",i,stud[i]);
	}
}
