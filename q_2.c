#include<stdio.h>
void main()
{
	int i,j,r;
	for(i=1;i<=5;i++)
	{
	for(r=1;r<i;r++)
	{
	printf(" ");
	}
	for(j=5;j>=i;j--)
	{
	printf("*");
	}
	printf("\n");
	}
}
