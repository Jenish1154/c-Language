#include <stdio.h>

int main() 
{
    int n;
	int temp;
	int r_n = 0;
	int rem;
    
    printf("Enter any number: ");
    scanf("%d", &n); 
	   
    temp = n;
    
    while (n > 0)
	{
        rem = n % 10;
        r_n = r_n * 10 + rem;
        n = n / 10;
    }
    
    if (temp == r_n)
	{
        printf("\n palindromic number"); 
    }
    else
	{
        printf("\n not a palindromic number"); 
    }    
    return 0; 
} 
