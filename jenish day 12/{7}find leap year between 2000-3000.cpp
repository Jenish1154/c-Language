#include <stdio.h>

int main()
{
 	int i=2000;
	int n=3000; //if i use scanf method int i; int n; printf("Enter i : "); scanf("%d",&i);  printf("Enter n : "); scanf("%d",&n);
   	
	while(i<=n)
	{
		if(i%4 == 0)
		{
		printf("%d\n",i);
		}
		i++;
	}

	return 0;
}
