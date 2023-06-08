#include <stdio.h>
int main()
{
    int i=1; 
	int sum=0;
	int n;
	
    printf("Enter Value : ");
    scanf("%d", &n);

    while(i<=n) 
	{
    sum = sum + i;
    i++;
    }

	printf("Sum : %d", sum); // if we enter 10 then 1+2+3+ ... +10= 55
    
	return 0;
}
