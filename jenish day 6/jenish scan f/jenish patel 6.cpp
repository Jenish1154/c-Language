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

ans = (x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z))+(3*(z+x));

printf ("ans = %d", ans);
return 0;
}
