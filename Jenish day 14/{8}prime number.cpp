#include <stdio.h>

int main() {

  int n;
  int i;
  int temp = 0;
  
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    temp = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      temp = 1;
      break;
    }
  }

  if (temp == 0)
    printf("\n%d is a prime number.", n);
  else
    printf("\n%d is not a prime number.", n);

  return 0;
}
