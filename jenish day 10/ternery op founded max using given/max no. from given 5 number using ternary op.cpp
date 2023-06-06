#include<stdio.h>

int main()
{
	
	int a,b,c,d,e;

    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);
    
    printf("Enter c : ");
    scanf("%d",&c);
    
    printf("Enter d : ");
    scanf("%d",&d);

    printf("Enter e : ");
    scanf("%d",&e);   
    
    a>b ?
	    a>c ?
	         a>d ?
	              a>e ?
	                  printf("\na is max")
	                  :
	                  printf("\ne is max")
	             :    
	              d>e ?
				      printf("\nd is max")
					  :
					  printf("\ne is max")   
	       : 
		   c>d ?
		         c>e ?
				     printf("\nc is max")
					 :
					 printf("\ne is max")
			   :
			    d>e ?
			         printf("\nd is max")	
					:
					 printf("\ne is max") 
    : b>c ?
           b>d ?
	            b>e ?
	                printf("b is max")	
			     	:
			    	printf("\ne is max") 
	           : 
		        d>e ?
		            printf("\nd is max")
				    :
				    printf("\ne is max")
		 :
	      c>d ?	    
	          c>e ?
			      printf("\nc is max")
			      :
			      printf("\ne is max")
		      : d>e ?
		            printf("\nd is max")
		            :
		            printf("\ne is max");
		  				 
	return 0;
				         
}
