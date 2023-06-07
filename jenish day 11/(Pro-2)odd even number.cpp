#include<stdio.h>

int main()
{
	
	int value ;
	
	printf("Enter value : ");
	scanf("%d",&value);
	
	if(value%2 == 0)
	{
		printf("\neven number");
	}
    else
	{
		printf("\nodd number");	
	}
	
      return 0;
}

