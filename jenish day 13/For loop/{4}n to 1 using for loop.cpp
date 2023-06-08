#include<stdio.h>

int main(){
	
	int i;
	int n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	for(i=1 ; n >= i ; n--)
	{
	printf("%d\n",n);		
	}
	
	return 0;
}



