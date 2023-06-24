#include<stdio.h>
#include<string.h>

int main(){
	
	char a[]="Jenish.com";
	char b[]="Jenish11";
	
	char c[100];
	char d[100];
	
	printf("enter Gmail : ");
	scanf("%s",c);
	
	printf("enter Gmail passward : ");
	scanf("%s",d);
	
	int z= (strcmp(a,c) && strcmp(b,d));
	
	if( z==0 ){
		printf("\naccount is valid ");
	}
	else{
		printf("\naccount is not valid!!! ");
	}
	
	return 0;
}