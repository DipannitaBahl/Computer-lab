#include<stdio.h>
int main()
{
	int i,n,s=0,a=0,b=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d\t",a);
	s=a+b;
	a=b;
	b=s;
}
	return 0;

}
	
