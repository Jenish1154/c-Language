#include<stdio.h>

int main()
{
	
	int a,b,c,d;

    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);
    
    printf("Enter c : ");
    scanf("%d",&c);
    
    printf("Enter d : ");
    scanf("%d",&d);

    a>b ?
	    a>c ?
	         a>d ?
	             printf("a is max")
	             :
	             printf("d is max")
	       : c>d ?
			     printf("c is max")  
				 :
				 printf("d is max")  
   :b>c ?
        b<d ?
			printf("b is max")
			:
			printf("d is max")	
	   :c>d ?
	        printf("c is max")
			:
			printf("d is max");		 		   
	      	 
    return 0;
}
