#include<stdio.h>

void sum(int a , int b){

	printf("sum : %d\n\n",a+b);

}
void sub(int a , int b){

	printf("sub : %d\n\n",a-b);

}
void multi(int a , int b){

	printf("multi : %d\n\n",a*b);

}
void divi(int a , int b){

	printf("divi : %d\n\n",a/b);

}

int main(){
	
	int a;
	int b;
	char sign;
	
	while(1){
		
	printf("enter value A:");
	scanf("%d",&a);
	
	printf("enter value B:");
	scanf("%d",&b);
	
	printf("+,-,*,/\n\n");
	
	printf("make your selection : ");
	scanf(" %c",&sign);
	
	switch(sign){
	    
		case'+':
			sum(a,b);
			break;
			
		case'-':
			sub(a,b);
			break;
			
		case'*':
			multi(a,b);
			break;
			
		case'/':
			divi(a,b);
			break;
	}
	}
	
	return 0;
}