 #include<stdio.h>
int
main ()
{
int x, y, ans;

printf ("Enter First Value :");
scanf ("%d", &x);

printf ("Enter First Value :");
scanf ("%d", &y);

ans = (x*x)-(2*x*y)+(y*y);

printf ("ans = %d", ans);

return 0;
}
