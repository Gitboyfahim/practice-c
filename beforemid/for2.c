#include<stdio.h>
int main()
{

	int i,n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		if(i%13==0)
		{
			printf("%d ",i);
		}
	}



	return 0;
}
