#include<stdio.h>

int main(){
	
	char value ;
	
	printf("Enter value : ");
	scanf("%c",&value);
	
	if(value >= 'a' && value <= 'z' )
	{
		printf("\nvalue is character");
	}
    else if(value >= '0' && value <= '9' )
	{
		printf("\nvalue is digit");
	}
    else
	{
		printf("\nvalue is Special character");	
	}
      return 0;
	}

