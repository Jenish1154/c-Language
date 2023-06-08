#include<stdio.h>  
  
int main()  
{  
    int i= 1;
	int n;  
  
    printf("Enter a number you want to make multiplication table :");  
    scanf("%d", &n);  
  
    do{
    	
		printf("%d x %d = %d\n",n,i,(i*n));  
        i++;  
	}
    while(i<=10);
	  
    return 0;  
}  