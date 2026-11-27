#include<stdio.h>
void main()
{
char name[30];
printf("enter the name:");
fgets(name, sizeof(name),stdin);//read string
printf("name:");
puts(name)}
