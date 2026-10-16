#incllude<stdio.h>
#iinclude<conio.h>
long double fact(long double k);
void main()
{
long double N,result;
clser();
printf("\n\nenter N");
scanf("%Lf",&n);
result=fact(n);
printf("factorial of %Lf is %f\n",N,result);
getch();
}
long double fact (long double k)
{
if(k==0||k==1)
return 1;
return k*fact(k-1);
}
