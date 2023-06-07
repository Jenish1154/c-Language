#include <stdio.h>
   
   int main(){
	
   int unit;
   float amount,t_b,s_g;
   
   printf(" Enter no of units consumed : ");
   scanf("%d", &unit);
   
   if (unit <= 50)
   {
    amount = unit*0.50; 
   }
   
   else if (unit <= 100)
   {
    amount = 25+((unit-50)*0.75); 
   }
   
   else if (unit <= 200)
   {
    amount = 100+((unit - 100 )*1.20);
   }
   
   else
   {
    amount = 220+((unit - 200)*1.50);  
   }
   
   s_g = amount*0.20;
   t_b = amount+ s_g;
   
   printf("\nelectricity bill = %.2f", t_b); // if 295 unit is comsumed then amount of the bill is 295 and total bill is {amount + s_g = 295 + 59 = 354/-} (295*0.20 = 59 is surcharge)
   return 0;
}