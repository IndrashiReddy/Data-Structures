#include<stdio.h>
int main()
{
	int i,num;
	printf("enter the postive integer");
	scanf("%d",&num);
	prinft("factors of %d are:",num);
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				printf("%d",i);
			}
		}
	return 0;
}
