#include<stdio.h>

int main()
{
	
	int a,b,c;

    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);
    
    printf("Enter c : ");
    scanf("%d",&c);

    a>b ?
	    a>c ?
		 printf("\na is max") 
	    :
		 printf("\nc is max")
    : b>c ?
         printf("\nb is max")
        :
		 printf("\nc is max");   

    return 0;
}
