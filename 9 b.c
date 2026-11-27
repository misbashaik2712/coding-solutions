#include <stdio.h>
int main()
{
char str[100];
char*pt;
int i=0;
printf("enter any string:");
fgets(str,sizeof(str),stain);
pt=str;
while (*pt!='\0'&*pt!='\n')
{
i++;
pt++;
}
printf("length of string =%d",i);
return0;
}
