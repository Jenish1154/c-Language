
#include <stdio.h>
 
int main()
{
    int i,j;
    int b = 1;
 
    for (i=1; i<=5; i++) {
 
        for (j=1; j<=i; j++) {
            printf("%d ", b++);
        }
        printf("\n");
    }
    return 0;
}