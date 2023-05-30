 #include<stdio.h>
int
main ()
{
int x, y, ans;

printf ("Enter First Value :");
scanf ("%d", &x);

printf ("Enter First Value :");
scanf ("%d", &y);

ans =  (x*x*x)-(y*y*y)-((3*x*y)*(x+y));

printf ("ans = %d", ans);

return 0;
}
