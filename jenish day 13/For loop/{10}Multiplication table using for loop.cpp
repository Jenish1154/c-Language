#include <stdio.h>

int main()
{
	int i=1;
	int n;
	int sum=0;
	
    printf("Enter Value : ");
    scanf("%d", &n);

    for(i=1 ; i<=10 ; i++)
	{
    printf("%d x %d = %d\n",n,i,(i*n));
    }
		
	return 0;
}
