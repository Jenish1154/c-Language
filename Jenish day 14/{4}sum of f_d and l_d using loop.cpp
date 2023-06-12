#include <stdio.h>
int main()
{
    int sum=0;
	int firstdigit;
	int lastdigit;
	
	printf("Enter a number : ");
    scanf("%d", &firstdigit);
    
    lastdigit = firstdigit % 10;
    
    while(firstdigit >9)
    {
        firstdigit = firstdigit / 10;
    }
    
    sum = firstdigit + lastdigit;
    
    printf("\nSum of first and last digit = %d", sum);
    
	return 0;
}