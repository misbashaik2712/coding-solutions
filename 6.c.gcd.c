#include,stdio.h>
#include<conic.h>
int gcd(int n1,int n2);
void main()
{
int a,b,result;
clrscr();
printf("enter the value");
scanf("%d%d",&a,&b);
result=gcd(a,b);
printf("gcd of%dand%dis%d\n",a,b,result);
getch();
}
int gcd(int n1,int n2)
{
if(n2!=0)
return gcd(n2,n1%n2);
returnn1;
}
