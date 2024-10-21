#include<stdio.h>
#include<conio.h>
int main(){
	int i =3, *x;
	float j =1.5, *y;
	char k ='c', *z;
	printf("Value of i =%d\n",i);
	printf("Value of j =%f\n",j);
	printf("Value of k =%c\n",k);
	
	x= &i;
	y= &j;
	z= &k;
	
	printf("Orignal value in x= %u\n",x);
	printf("Orignal value in y= %u\n",y);
	printf("Orignal value in z= %u\n",z);
	
	x++;
	y++;
	z++;
	printf("New value in x=%u\n",x);
	printf("New value in y=%u\n",y);
	printf("New value in z=%u\n",z);
}
