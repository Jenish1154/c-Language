#include <stdio.h>

int main()
{
	int i=1;
	int n;
	int fact=1;
	
    printf("Enter Value : ");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++)
	{
    fact=fact*i; 
    }
		
	printf(" \n fact is : %d",fact); 
	
	return 0;
}
