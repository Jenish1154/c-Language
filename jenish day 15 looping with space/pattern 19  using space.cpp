#include<stdio.h>

int main(){
	
	int i,j,k;
	for(i=5; i>=1 ; i--){
		for(k=i;k<=4;k++){
			printf(" ");
		}
		for(j=i; j>=1 ; j--){
			if(j%2==0){
			
			printf("0");
		}
		else{
			printf("1");	
		}
		}
		printf("\n");
	}
	
	return 0;
}