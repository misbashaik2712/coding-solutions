#include<stdio.h>
void main()
{
int m[5],i,key,s=0;
printf("enter the 5 value");
for(i=0;i<5;i++)
scanf("%d,&key");
for(i=0;i<5;i++)
{
if(key==m[i])
{
s=1;
break;
}
}
if(s==1)
printf("element found at %d",i+1);
else
printf("element not found");
}
