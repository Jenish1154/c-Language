#include<stdio.h>  
 
 int main(){

    int b_s, hra, da, ta, g_s, add;
    
    printf("Enter salry : ");
    scanf("%d",&b_s);
    
    hra = (10.00/100)*b_s;
    da  = (05.00/100)*b_s;
    ta  = (08.00/100)*b_s;
    
    g_s = hra + da + ta + b_s;

    
    printf("g_s : %d",g_s);
    
    return 0;  
    
}  
