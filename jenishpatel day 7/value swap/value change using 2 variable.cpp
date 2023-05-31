#include<stdio.h>

int main(){
	
	int a = 50;
	int b = 60;
	
	a = a + b;
	b = a - b;
	a = a - b;
		
	printf("A : %d\n",a);	
	printf("B : %d\n",b);	
	
	return 0;
	
	
}
