#include <stdio.h>

int main()
{

    int a,b,c;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    printf("Enter c : ");
    scanf("%d", &c);
 
    if(a<b) 
	{
        if(a<c) 
		{
        printf("\na is min ");
        }
		else 
		{
		printf("\nc is min ");
        }
    }   
	else
	{
	    if(b<c)
		{
		printf("\nb is min ");
		}
        else
		{
		printf("\nc is min ");
        }
    }

    return 0;
}
