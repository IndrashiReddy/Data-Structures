#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("enter the positive number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f=f*i;
	printf("factorial of :%d\n",n,f);
	return 0;
}
