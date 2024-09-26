#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l,p;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(k=i;k<5;k++)
		{
			printf("  ");
		}
		for(l=i;l<5;l++)
		{
			printf("  ");
		}
		for(p=i;p>=1;p--)
		{
			printf("%d ",p);
		}
		printf("\n");
	}
}
