#include<stdio.h>  
 
 int main(){

    float f_t, c_s, add;  
    
	c_s = 25;  
    f_t =( (c_s*9)/5);
	add = f_t + 32;
	f_t = add;  
    
	printf("\n\n Temp in f_t is : %f",f_t);  

    return 0;  
    
}  
