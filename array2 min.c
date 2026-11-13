#include<stdio.h>
void main()
{
int m[5],i,min;
printf("enter 5 values");
for(i=0;i<5;i++)
scanf("%d",&m[i]);
for(i=0;i<5;i++)

{
if(m[i]<min)
{
min=m[i];
}
}
printf("min=%d",min);
}
