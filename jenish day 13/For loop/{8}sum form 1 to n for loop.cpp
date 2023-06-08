#include <stdio.h>

int main()
{
	int i=1;
	int n;
	int sum=0;
	
    printf("Enter Value : ");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++)
	{
    sum = sum + i ;
    }
		
	printf(" \n Sum is : %d",sum); 
	
	return 0;
}
