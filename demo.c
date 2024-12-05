#include<stdio.h>

int main(){
	
	int a=20;
	int b=40;
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("a:%d \n",a);
	printf("b:%d",b);
}
