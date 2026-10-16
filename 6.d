#include<stdio.h>
#include<conio.h>
int fib(int k);
void main()
{
int n,i;
clser();
printf("enter Nth term for fibnacci series:" );
scanf("%d",&n);
printf("fibnacci series up to %d is \n",N);
for(i=0;i<n;i++)
{
printf("%d", fib(i));
}
printf("\n");
getch();
}
int fib (int k)
{
if(k==0)
return0;
if(k==1)
return 1;
return fib (k-1)+fib(k-2);
