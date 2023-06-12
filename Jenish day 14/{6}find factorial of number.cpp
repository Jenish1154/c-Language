#include <stdio.h>
int main()
{
    int i=1; 
	int fact=1;
	int n;
	
    printf("Enter Value : ");
    scanf("%d", &n);
    
    do
    {
    	fact=fact*i;
		i++;
	}
    while(i<=n);
    
    printf("Factorial of %d is: %d",n,fact);	    

    
	return 0;
}
