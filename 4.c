#include<stdio.h>
int main()
{
long long n, original,bin=0;
long long rem,m i=1;
printf("enter a decimal number:");
scanf('%||d",&n');
original=n;
while(n!=0)
{
rem=n%2;
n=n/2;
n=n/2;
bin=bin+(rem*i);
i=i*10;
}
printf("||d in decimal=% in binary ",original,bin);
return0;
}
