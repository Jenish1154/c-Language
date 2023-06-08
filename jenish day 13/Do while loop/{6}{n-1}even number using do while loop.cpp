#include <stdio.h>

int main()
{
	int i=1;
	int n;

    printf("Enter the value :");
	scanf("%d",&n);

    do
	{
	
		if(n%2 == 0)
		{
		printf("%d\n",n);
		}
		n--;
    	
	}
	while(n>=1);


	return 0;
}
