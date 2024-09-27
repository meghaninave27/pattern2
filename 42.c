#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l,m,n,p,q,r,s;
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
		for(m=i;m>=1;m--)
		{
			printf("%d ",m);
		}
		printf("\n");
	}
	for(n=1;n<=5;n++)
	{
		for(p=1;p<=n;p++)
		{
			printf("%d ",p);
			
			}
			for(q=n;q<5;q++)
			{
				printf("  ");
			}
			for(r=n;r<5;r++)
			{
				printf("  ");
			}
			for(s=n;s>=1;s--)
			{
				printf("%d ",s);
			}
			printf("\n");	
	}
}
