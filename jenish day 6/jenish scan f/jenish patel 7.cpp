#include<stdio.h>
int
main ()
{
int x, y, z, ans;

printf ("Enter First Value :");
scanf ("%d", &x);

printf ("Enter First Value :");
scanf ("%d", &y);

printf ("Enter First Value :");
scanf ("%d", &z);

ans = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));

printf ("ans = %d", ans);

return 0;
}
