#include<stdio.h>

int main(){
	
	int i;
	int count=0;
	
	printf("Enter Value : ");
	scanf("%d",&i);
	
	while(i!=0)
	{
		
	i= i / 10;
	count++;
	
	}
	
	printf("%d",count);
	
	return 0;
}
