#include<stdio.h>

int main()
{

    int i = 1;
	int fact= 1;
	int n;


    printf("Enter a number to find factorial: ");
    scanf("%d",&n);

    while(i<=n)
	{
        fact=fact*i;
		i++;
    } 
        printf("Factorial of %d is: %d",n,fact);

return 0;

}