#include<stdio.h>

int main()
{
	
	int a,b,c,d;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    printf("Enter c : ");
    scanf("%d", &c);
    
    printf("Enter d : ");
    scanf("%d", &d);
 
    if(a>b)
    {    if(a>c)
         {   if(a>d)
             {   printf("\na is max");
			 }
			 else
			 {   printf("\nd is max");
			 }
		 }
		 else
		 {   if(c>d)
             {   printf("\nc is max");
			 }
			 else
			 {   printf("\nd is max");
			 }
	     }
	}
    else
    {   if(b>c)
        {   if(b>d)
            {    printf("\nb is max");
			}
			else
			{    printf("\nd is max");
			}
	    }
	    else
	    {   if(c>d)
		    {    printf("\nc is max");   
	        }
	        else
	        {    printf("\nd is max");
			}
		}
    }

    return 0;
}
