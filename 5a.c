#include <stdio.h>
void main()
{
int i, j, N;
printf("Enter the value of N");
scanf("%d", &N);
printf("Square pattern of size %d is\n", N);
for (i = 1; i <= N; i++)
{
for (j = 1; j <= N; j++)
{
printf("* ");
}
printf("\n");
}

}
