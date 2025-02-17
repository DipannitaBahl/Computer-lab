#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
		printf("The factorial of the number %d",f);
		return 0;
	}
