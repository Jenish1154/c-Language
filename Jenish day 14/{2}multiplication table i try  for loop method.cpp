#include <stdio.h>

int main()
{
	int i=1;
	int n;
	int sum=0;
	
    printf("Enter a number that you want to see multiplication table  : ");
    scanf("%d", &n);

    for(i=1 ; i<=10 ; i++)
	{
    printf("\n%d x %d = %d\n",n,i,(i*n));
    }
		
	return 0;
}


