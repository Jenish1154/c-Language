#include <stdio.h>

int main()
{
	int i=1;
	int n;

    printf("Enter the value :"); // on day 12 i use 1 to N for even number but project is N to 1, so i do this right here at day 13( find out even number from n to 1
	scanf("%d",&n);

    while(n>=1)
	{
	
		if(n%2 == 0)
		{
		printf("%d\n",n);
		}
		n--;
    }
	;


	return 0;
}
