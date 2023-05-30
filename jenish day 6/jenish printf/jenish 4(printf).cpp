#include<stdio.h>

int main(){
	
	int x =25;
	int y =5;
	int ans;
	
	ans = (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	
	printf("%d",ans);
	return 0;
	
	
}
