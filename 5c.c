#include<stdio.h>
void main()
{
int i, j, N;;
printf("Enter the valule of N");
scanf("%d", &N);
printf("Pattern up to %d rows is\n", N);
for (i = 1; i <= N; i++)
{
for (j = 1; j <= i; j++)
{
printf("* ");
}
printf("\n");
}

}
