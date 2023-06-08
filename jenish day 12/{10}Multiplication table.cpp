#include<stdio.h>  
  
int main()  
{  
    int i= 1;
	int n;  
  
    printf("Enter a number you want to make multiplication table\n");  
    scanf("%d", &n);  
  
    printf("\ntable of %d is:\n\n",n);  
  
    while(i<=10)  
    {  
        printf("%d x %d = %d\n",n,i,(i*n));  
        i++;  
    }  
  
    return 0;  
}  