#include <stdio.h>
int main() {

  int d1 = 0; // d1 means digit 1
  int d2 = 1; // d2 means digit 2
  int i; // value of i is : 3, digit 1 (d1)=0 and digit 2 (d2)=1, but i value this in for loop { 'i' is 3rd digit }
  int n; //  n value  from scanf 
  int nd; // next digit
  
  nd = d1 + d2; // next digit 
  
  printf("Enter the number n : ");
  scanf("%d",&n); //  n value 

    printf("Fibonacci Series: %d, %d,", d1, d2);
  
  for(i = 3 ; i<=n ; ++i) // i<=n means value of i is equal or less than n , ex. if i enter n=9 then fibonacci series run until 9 then after loop stops, and ++i mean add 1 in i after every loop
  {
    printf(" %d, ",nd);
    d1 = d2; // d1 ni value d2 ne aapvi
    d2 = nd; // d2 ni value next digit ne aapvi
    nd = d1 + d2; //nd = d1 + d2
  }
  return 0;
}