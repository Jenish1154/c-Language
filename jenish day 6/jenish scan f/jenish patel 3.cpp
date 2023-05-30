 #include<stdio.h>
int
main ()
{
int x, y, ans;

printf ("Enter First Value :");
scanf ("%d", &x);

printf ("Enter First Value :");
scanf ("%d", &y);

ans =  (x*x*x)+((3*x*y)*(x+y))+(y*y*y);

printf ("ans = %d", ans);

return 0;
}
