#include <stdio.h>


int main(){

	int num1,num2;

	printf("Enter number : ");
	scanf("%d",&num1);
  
    printf("Enter number : ");
	scanf("%d",&num2);
	 
	if(num1<num2){	
	printf("%d is smaller",num1);
	}
	
	else if(num2<num1){
    printf("%d is smaller",num2);
	}                                        
	
	else{ printf("%d and %d are equal",num1,num2); 
	}
	
	return 0;
}

